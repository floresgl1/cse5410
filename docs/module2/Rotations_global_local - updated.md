> **[figure]**
> Yy
> (B)
> > a
> a yirY, Py
> G)
> Mey
> x
> XY
> Xj =X,
> FIGURE 2.2. Position vector of point P when local and global frames are coin-
> cident.

FIGURE 2.2. Position vector of point P when local and global frames are coincident.

> **[figure]**
> = Vy foe
> (RB (G
> pet en
> \eee a V2¥i6 9g P2Eo P;
> oy! %
> L—~ oh \
> I > \e|
> — S G oe
> X? aay
> FIGURE 2.4. Position vectors of point point P before and after the rotation of the local
> frame about the Z-axis of the global frame.

FIGURE 2.4. Position vectors of point point P before and after the rotation of the local frame about the Z-axis of the global frame. Cr= Oza er (2.1)

> **[figure]**
> (RB Y
> /hS F ae_ Sere
> |i i]
> \ } Ve pescecses, P; Bs.
> Shyeee _¥ 7: yeeoa ohhbs \teG }
> = ¥, rok P,
> i
> V1cg Vi Vs ‘ ; %
> i5"
> . ae
> X) AX}
> FIGURE 2.10. Position vectors of point P before and after rotation of the local
> trame about the z-axis of the local frame.

FIGURE 2.10. Position vectors of point P before and after rotation of the local trame about the z-axis of the local frame.

r= Alo “r. (2.69)

Coordinates (Fig 2.4). coordinates in the global frame (Fig 2.10).

With one rotation only, there is no difference between rotations about global axis and local axis. It makes a difference when there are successive rotations:

- Rotation of the local frame about global axis is to use global frame as reference.

- Rotation of the local frame about local axis is to use local frame (current frame) as reference

# **Successive Rotations**

|Successive (_local frame_) Rotations
about Global Axis|Successive (_local frame)_Rotations
about Local Axis|
|---|---|
|Initial:
Global frame and local frame are**coincident**:<sup>B</sup>_r_=<sup>G</sup>_r_|Initial:
Global frame and local frame are**coincident**:<sup>B</sup>_r_=<sup>G</sup>_r_|
|For i=1 to n
_Gr = Qi* Br _
Reset local frame be coincident with global frame
Update<sup>B</sup>_r_<=<sup>G</sup>_r_
endfor|For i=1 to n
_Br= Ai* Gr_
Set local frame as reference frame
Update<sup>G</sup>_r_<=<sup>B</sup>_r_
endfor|
|Result: (Rotation about global frame)
**_Gr = Qn* Qn-1*…Q2* Q1 Br _**
**Pre-multiplication**|Result: (Rotations about current frame (local frame)
_Br = An* An-1*…A2*A1*Gr _
_-1_
Multiple_(An* An-1*…A2*A1) _to both sides:
_Br =(An* An-1*…A2*A1)-1 Gr _
_Global coordinates after successive local rotations:_
_Gr =A1 _
_-1* A2 _
_– 1* …* An-1_
_– 1* An _
_– 1* Br _|
||**_Gr = Q1* Q2*…Qn-1* Qn *Br _**
**Post-multiplication **|

Example: Given a position rp=[1 1 1]<sup>T</sup> , find its global coordinate after the following rotations in sequence.

- (1) Rotate about Z-axis 30 degrees

- (2) Rotate about z-axis 60 degrees

- (3) Rotate about x-axis 45 degrees

- (4) Rotate about Y-axis 30 degrees

## Solution:

Initially local and global frames are coincident.<sup>B</sup> rp = [1 1 1]<sup>T</sup> Without any rotations,<sup>G</sup> rp = I *<sup>B</sup> rp where I is an identity matrix. Q1(Z, 30d), Q2(z, 60d), Q3(x, 45d), Q4(Y, 30d) The subscript after Q indicates the order of the rotations.

After the first rotation (about Global axis): pre-multiplication :Q = Q1(Z, 30d)*I After the 2<sup>nd</sup> rotation (about Local axis): post-multiplication Q = Q1(Z, 30d)*I*Q2(z, 60d)

c30d —s30d 0 c60d -—s60d 0 QI(Z, 30d)=| s30d 30d 0 Q2(z, 60d)=|s60d c60d 0 0 0 1 0 0 1

Q3(x, 45d) = | | Q4(Y, 30d) = | |

octave:12> rB=[1, 1,1]' r B= 1 1 1

>>> Q1Z=[cosd(30), -sin(30d), 0; sind(30), cosd(30), 0; 0, 0,1] yctave:6> Q1Z=[cosd(30), -sind(30), 0; sind(30), cosd(30), 0; 0, 0,1] )1Z =

0.8660 -0.5000 0 0.5000 0.8660 0 0 0 1.0000

- ctave:7> Q2_ z=[cosd(60), -sind(60), 0; sind(60), cosd(60), 0; 0, 0,1] 2 Z= 0.5000 -0.8660 0 0.8660 0.5000 0 0 0 1.0000

yctave:8> Q3 x=[1, 0,0; 0, cosd(45), -sind(45); 0, sind(45), cosd(45)]; yctave:9> Q3 x=[1, 0,0; 0, cosd(45), -sind(45); 0, sind(45), cosd(45)] 3xX =

1.0000 0 0 0 0.7071 -0.7071 0 0.7071 #£40.7071 yctave:10> Q4Y=[cosd(30), 0, sind(30); 0, 1, 0; -sind(30), 0, cosd(30)] 144Y = 0.8660 0 0.5000 0 1.0000 0 -0.5000 0 0.8660

octave:15> Q= Q4 Y*Q1 Z*Q2 z*Q3 x Q =

4.3453e-17 -2.5882e-01 9.6593e-01 1.0000e+00 4.451lle-17 -4.451le-17 -2.0318e-17 9.6593e-01 2.5882e-01

octave:16> r_G=Q*rB rGe

0.7071 1.0000 1.2247
