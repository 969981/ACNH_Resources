
void FUN_026b1890(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  uVar4 = (ulong)*param_2;
  if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_2[1])) ||
     (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_2[1] & 0x1f) & 1) == 0)) {
    memset(param_1,0,0x13230);
    FUN_0268abb0(param_1);
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  bVar2 = FUN_020fd7d8(param_2);
  param_1[2] = bVar2;
  pbVar5 = param_1 + 4;
  if ((*(int *)(param_2 + 0x20) == 0) || (*(int *)(param_2 + 4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5);
  }
  pbVar5 = param_1 + 0x5f4;
  if ((*(int *)(param_2 + 0x610) == 0) || (*(int *)(param_2 + 0x5f4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0x5f4);
  }
  pbVar5 = param_1 + 0xbe4;
  if ((*(int *)(param_2 + 0xc00) == 0) || (*(int *)(param_2 + 0xbe4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0xbe4);
  }
  pbVar5 = param_1 + 0x11d4;
  if ((*(int *)(param_2 + 0x11f0) == 0) || (*(int *)(param_2 + 0x11d4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0x11d4);
  }
  pbVar5 = param_1 + 0x17c4;
  if ((*(int *)(param_2 + 0x17e0) == 0) || (*(int *)(param_2 + 0x17c4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0x17c4);
  }
  pbVar5 = param_1 + 0x1db4;
  if ((*(int *)(param_2 + 0x1dd0) == 0) || (*(int *)(param_2 + 0x1db4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0x1db4);
  }
  pbVar5 = param_1 + 0x23a4;
  if ((*(int *)(param_2 + 0x23c0) == 0) || (*(int *)(param_2 + 0x23a4) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0x23a4);
  }
  pbVar5 = param_1 + 0x2994;
  if ((*(int *)(param_2 + 0x29b0) == 0) || (*(int *)(param_2 + 0x2994) == 0)) {
    memset(pbVar5,0,0x5f0);
    FUN_027b5970(pbVar5);
  }
  else {
    FUN_027b6050(pbVar5,param_2 + 0x2994);
  }
  lVar9 = 0;
  lVar10 = 0xa0;
  do {
    if (*(int *)(param_2 + lVar9 + 0x2f84 + 0x1c) == 0 || *(int *)(param_2 + lVar9 + 0x2f84) == 0) {
      pbVar6 = param_1 + lVar9 + 0x2f88;
      memset(param_1 + lVar9 + 0x2f84,0,0x158);
      pbVar5 = param_1 + lVar9 + 0x2f98;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      param_1[lVar9 + 0x2f9c] = 2;
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      pbVar5 = param_1 + lVar9 + 0x2f90;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      memset(param_1 + lVar9 + 0x2fa0,0,0x120);
      param_1[lVar9 + 0x30c2] = 1;
      (param_1 + lVar9 + 0x30d0)[0] = 0xfe;
      (param_1 + lVar9 + 0x30d0)[1] = 0xff;
      (param_1 + lVar9 + 0x30c0)[0] = 0xe7;
      (param_1 + lVar9 + 0x30c0)[1] = 3;
      (param_1 + lVar9 + 0x30c4)[0] = 0xe7;
      (param_1 + lVar9 + 0x30c4)[1] = 3;
      param_1[lVar9 + 0x30c6] = 1;
      param_1[lVar9 + 0x30c7] = 0;
      param_1[lVar9 + 0x30c8] = 0;
      pbVar5 = param_1 + lVar9 + 0x30ca;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      (param_1 + lVar9 + 0x30d2)[0] = 0;
      (param_1 + lVar9 + 0x30d2)[1] = 0;
      pbVar5 = param_1 + lVar9 + 0x30d4;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      FUN_0277d4ac();
      param_1[lVar9 + 0x30da] = 0;
      (param_1 + lVar9 + 0x30d8)[0] = 0xff;
      (param_1 + lVar9 + 0x30d8)[1] = 0xff;
    }
    else {
      FUN_027a8874();
    }
    lVar9 = lVar9 + 0x158;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  pbVar5 = param_1 + 0x10684;
  if (*(int *)(param_2 + 0x10684) == 0) {
    param_1[0x1069c] = 0;
    param_1[0x1069d] = 0;
    param_1[0x1069e] = 0;
    param_1[0x1069f] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x1068c] = 0;
    param_1[0x1068d] = 0;
    param_1[0x1068e] = 0;
    param_1[0x1068f] = 0;
    param_1[0x10690] = 0;
    param_1[0x10691] = 0;
    param_1[0x10692] = 0;
    param_1[0x10693] = 0;
    param_1[0x10694] = 0;
    param_1[0x10695] = 0;
    param_1[0x10696] = 0;
    param_1[0x10697] = 0;
    param_1[0x10698] = 0;
    param_1[0x10699] = 0;
    param_1[0x1069a] = 0;
    param_1[0x1069b] = 0;
    param_1[0x1069c] = 2;
    param_1[0x10688] = 0;
    param_1[0x10689] = 0;
    param_1[0x1068a] = 0;
    param_1[0x1068b] = 0;
    param_1[0x1068c] = 0;
    param_1[0x1068d] = 0;
    param_1[0x1068e] = 0;
    param_1[0x1068f] = 0;
    param_1[0x10690] = 0;
    param_1[0x10691] = 0;
    param_1[0x10692] = 0;
    param_1[0x10693] = 0;
    param_1[0x10694] = 0;
    param_1[0x10695] = 0;
    param_1[0x10696] = 0;
    param_1[0x10697] = 0;
    param_1[0x10698] = 0;
    param_1[0x10699] = 0;
    param_1[0x1069a] = 0;
    param_1[0x1069b] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10684);
    uVar8 = *(undefined8 *)(param_2 + 0x1068c);
    uVar7 = *(undefined8 *)(param_2 + 0x10694);
    *(undefined4 *)(param_1 + 0x1069c) = *(undefined4 *)(param_2 + 0x1069c);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x1068c) = uVar8;
    *(undefined8 *)(param_1 + 0x10694) = uVar7;
  }
  pbVar5 = param_1 + 0x106a0;
  if (*(int *)(param_2 + 0x106a0) == 0) {
    param_1[0x106b8] = 0;
    param_1[0x106b9] = 0;
    param_1[0x106ba] = 0;
    param_1[0x106bb] = 0;
    param_1[0x106a8] = 0;
    param_1[0x106a9] = 0;
    param_1[0x106aa] = 0;
    param_1[0x106ab] = 0;
    param_1[0x106ac] = 0;
    param_1[0x106ad] = 0;
    param_1[0x106ae] = 0;
    param_1[0x106af] = 0;
    param_1[0x106b0] = 0;
    param_1[0x106b1] = 0;
    param_1[0x106b2] = 0;
    param_1[0x106b3] = 0;
    param_1[0x106b4] = 0;
    param_1[0x106b5] = 0;
    param_1[0x106b6] = 0;
    param_1[0x106b7] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x106b8] = 2;
    param_1[0x106b4] = 0;
    param_1[0x106b5] = 0;
    param_1[0x106b6] = 0;
    param_1[0x106b7] = 0;
    param_1[0x106a4] = 0;
    param_1[0x106a5] = 0;
    param_1[0x106a6] = 0;
    param_1[0x106a7] = 0;
    param_1[0x106a8] = 0;
    param_1[0x106a9] = 0;
    param_1[0x106aa] = 0;
    param_1[0x106ab] = 0;
    param_1[0x106ac] = 0;
    param_1[0x106ad] = 0;
    param_1[0x106ae] = 0;
    param_1[0x106af] = 0;
    param_1[0x106b0] = 0;
    param_1[0x106b1] = 0;
    param_1[0x106b2] = 0;
    param_1[0x106b3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x106a0);
    uVar8 = *(undefined8 *)(param_2 + 0x106a8);
    uVar7 = *(undefined8 *)(param_2 + 0x106b0);
    *(undefined4 *)(param_1 + 0x106b8) = *(undefined4 *)(param_2 + 0x106b8);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x106a8) = uVar8;
    *(undefined8 *)(param_1 + 0x106b0) = uVar7;
  }
  pbVar5 = param_1 + 0x106bc;
  if (*(int *)(param_2 + 0x106bc) == 0) {
    param_1[0x106d4] = 0;
    param_1[0x106d5] = 0;
    param_1[0x106d6] = 0;
    param_1[0x106d7] = 0;
    param_1[0x106c4] = 0;
    param_1[0x106c5] = 0;
    param_1[0x106c6] = 0;
    param_1[0x106c7] = 0;
    param_1[0x106c8] = 0;
    param_1[0x106c9] = 0;
    param_1[0x106ca] = 0;
    param_1[0x106cb] = 0;
    param_1[0x106cc] = 0;
    param_1[0x106cd] = 0;
    param_1[0x106ce] = 0;
    param_1[0x106cf] = 0;
    param_1[0x106d0] = 0;
    param_1[0x106d1] = 0;
    param_1[0x106d2] = 0;
    param_1[0x106d3] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x106d4] = 2;
    param_1[0x106c0] = 0;
    param_1[0x106c1] = 0;
    param_1[0x106c2] = 0;
    param_1[0x106c3] = 0;
    param_1[0x106c4] = 0;
    param_1[0x106c5] = 0;
    param_1[0x106c6] = 0;
    param_1[0x106c7] = 0;
    param_1[0x106c8] = 0;
    param_1[0x106c9] = 0;
    param_1[0x106ca] = 0;
    param_1[0x106cb] = 0;
    param_1[0x106cc] = 0;
    param_1[0x106cd] = 0;
    param_1[0x106ce] = 0;
    param_1[0x106cf] = 0;
    param_1[0x106d0] = 0;
    param_1[0x106d1] = 0;
    param_1[0x106d2] = 0;
    param_1[0x106d3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x106bc);
    uVar8 = *(undefined8 *)(param_2 + 0x106c4);
    uVar7 = *(undefined8 *)(param_2 + 0x106cc);
    *(undefined4 *)(param_1 + 0x106d4) = *(undefined4 *)(param_2 + 0x106d4);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x106c4) = uVar8;
    *(undefined8 *)(param_1 + 0x106cc) = uVar7;
  }
  pbVar5 = param_1 + 0x106d8;
  if (*(int *)(param_2 + 0x106d8) == 0) {
    param_1[0x106f0] = 0;
    param_1[0x106f1] = 0;
    param_1[0x106f2] = 0;
    param_1[0x106f3] = 0;
    param_1[0x106e0] = 0;
    param_1[0x106e1] = 0;
    param_1[0x106e2] = 0;
    param_1[0x106e3] = 0;
    param_1[0x106e4] = 0;
    param_1[0x106e5] = 0;
    param_1[0x106e6] = 0;
    param_1[0x106e7] = 0;
    param_1[0x106e8] = 0;
    param_1[0x106e9] = 0;
    param_1[0x106ea] = 0;
    param_1[0x106eb] = 0;
    param_1[0x106ec] = 0;
    param_1[0x106ed] = 0;
    param_1[0x106ee] = 0;
    param_1[0x106ef] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x106f0] = 2;
    param_1[0x106ec] = 0;
    param_1[0x106ed] = 0;
    param_1[0x106ee] = 0;
    param_1[0x106ef] = 0;
    param_1[0x106dc] = 0;
    param_1[0x106dd] = 0;
    param_1[0x106de] = 0;
    param_1[0x106df] = 0;
    param_1[0x106e0] = 0;
    param_1[0x106e1] = 0;
    param_1[0x106e2] = 0;
    param_1[0x106e3] = 0;
    param_1[0x106e4] = 0;
    param_1[0x106e5] = 0;
    param_1[0x106e6] = 0;
    param_1[0x106e7] = 0;
    param_1[0x106e8] = 0;
    param_1[0x106e9] = 0;
    param_1[0x106ea] = 0;
    param_1[0x106eb] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x106d8);
    uVar8 = *(undefined8 *)(param_2 + 0x106e0);
    uVar7 = *(undefined8 *)(param_2 + 0x106e8);
    *(undefined4 *)(param_1 + 0x106f0) = *(undefined4 *)(param_2 + 0x106f0);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x106e0) = uVar8;
    *(undefined8 *)(param_1 + 0x106e8) = uVar7;
  }
  pbVar5 = param_1 + 0x106f4;
  if (*(int *)(param_2 + 0x106f4) == 0) {
    param_1[0x1070c] = 0;
    param_1[0x1070d] = 0;
    param_1[0x1070e] = 0;
    param_1[0x1070f] = 0;
    param_1[0x106fc] = 0;
    param_1[0x106fd] = 0;
    param_1[0x106fe] = 0;
    param_1[0x106ff] = 0;
    param_1[0x10700] = 0;
    param_1[0x10701] = 0;
    param_1[0x10702] = 0;
    param_1[0x10703] = 0;
    param_1[0x10704] = 0;
    param_1[0x10705] = 0;
    param_1[0x10706] = 0;
    param_1[0x10707] = 0;
    param_1[0x10708] = 0;
    param_1[0x10709] = 0;
    param_1[0x1070a] = 0;
    param_1[0x1070b] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x1070c] = 2;
    param_1[0x106f8] = 0;
    param_1[0x106f9] = 0;
    param_1[0x106fa] = 0;
    param_1[0x106fb] = 0;
    param_1[0x106fc] = 0;
    param_1[0x106fd] = 0;
    param_1[0x106fe] = 0;
    param_1[0x106ff] = 0;
    param_1[0x10700] = 0;
    param_1[0x10701] = 0;
    param_1[0x10702] = 0;
    param_1[0x10703] = 0;
    param_1[0x10704] = 0;
    param_1[0x10705] = 0;
    param_1[0x10706] = 0;
    param_1[0x10707] = 0;
    param_1[0x10708] = 0;
    param_1[0x10709] = 0;
    param_1[0x1070a] = 0;
    param_1[0x1070b] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x106f4);
    uVar8 = *(undefined8 *)(param_2 + 0x106fc);
    uVar7 = *(undefined8 *)(param_2 + 0x10704);
    *(undefined4 *)(param_1 + 0x1070c) = *(undefined4 *)(param_2 + 0x1070c);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x106fc) = uVar8;
    *(undefined8 *)(param_1 + 0x10704) = uVar7;
  }
  pbVar5 = param_1 + 0x10710;
  if (*(int *)(param_2 + 0x10710) == 0) {
    param_1[0x10728] = 0;
    param_1[0x10729] = 0;
    param_1[0x1072a] = 0;
    param_1[0x1072b] = 0;
    param_1[0x10718] = 0;
    param_1[0x10719] = 0;
    param_1[0x1071a] = 0;
    param_1[0x1071b] = 0;
    param_1[0x1071c] = 0;
    param_1[0x1071d] = 0;
    param_1[0x1071e] = 0;
    param_1[0x1071f] = 0;
    param_1[0x10720] = 0;
    param_1[0x10721] = 0;
    param_1[0x10722] = 0;
    param_1[0x10723] = 0;
    param_1[0x10724] = 0;
    param_1[0x10725] = 0;
    param_1[0x10726] = 0;
    param_1[0x10727] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x10728] = 2;
    param_1[0x10724] = 0;
    param_1[0x10725] = 0;
    param_1[0x10726] = 0;
    param_1[0x10727] = 0;
    param_1[0x10714] = 0;
    param_1[0x10715] = 0;
    param_1[0x10716] = 0;
    param_1[0x10717] = 0;
    param_1[0x10718] = 0;
    param_1[0x10719] = 0;
    param_1[0x1071a] = 0;
    param_1[0x1071b] = 0;
    param_1[0x1071c] = 0;
    param_1[0x1071d] = 0;
    param_1[0x1071e] = 0;
    param_1[0x1071f] = 0;
    param_1[0x10720] = 0;
    param_1[0x10721] = 0;
    param_1[0x10722] = 0;
    param_1[0x10723] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10710);
    uVar8 = *(undefined8 *)(param_2 + 0x10718);
    uVar7 = *(undefined8 *)(param_2 + 0x10720);
    *(undefined4 *)(param_1 + 0x10728) = *(undefined4 *)(param_2 + 0x10728);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x10718) = uVar8;
    *(undefined8 *)(param_1 + 0x10720) = uVar7;
  }
  pbVar5 = param_1 + 0x1072c;
  if (*(int *)(param_2 + 0x1072c) == 0) {
    param_1[0x10744] = 0;
    param_1[0x10745] = 0;
    param_1[0x10746] = 0;
    param_1[0x10747] = 0;
    param_1[0x10734] = 0;
    param_1[0x10735] = 0;
    param_1[0x10736] = 0;
    param_1[0x10737] = 0;
    param_1[0x10738] = 0;
    param_1[0x10739] = 0;
    param_1[0x1073a] = 0;
    param_1[0x1073b] = 0;
    param_1[0x1073c] = 0;
    param_1[0x1073d] = 0;
    param_1[0x1073e] = 0;
    param_1[0x1073f] = 0;
    param_1[0x10740] = 0;
    param_1[0x10741] = 0;
    param_1[0x10742] = 0;
    param_1[0x10743] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x10744] = 2;
    param_1[0x10730] = 0;
    param_1[0x10731] = 0;
    param_1[0x10732] = 0;
    param_1[0x10733] = 0;
    param_1[0x10734] = 0;
    param_1[0x10735] = 0;
    param_1[0x10736] = 0;
    param_1[0x10737] = 0;
    param_1[0x10738] = 0;
    param_1[0x10739] = 0;
    param_1[0x1073a] = 0;
    param_1[0x1073b] = 0;
    param_1[0x1073c] = 0;
    param_1[0x1073d] = 0;
    param_1[0x1073e] = 0;
    param_1[0x1073f] = 0;
    param_1[0x10740] = 0;
    param_1[0x10741] = 0;
    param_1[0x10742] = 0;
    param_1[0x10743] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x1072c);
    uVar8 = *(undefined8 *)(param_2 + 0x10734);
    uVar7 = *(undefined8 *)(param_2 + 0x1073c);
    *(undefined4 *)(param_1 + 0x10744) = *(undefined4 *)(param_2 + 0x10744);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x10734) = uVar8;
    *(undefined8 *)(param_1 + 0x1073c) = uVar7;
  }
  pbVar5 = param_1 + 0x10748;
  if (*(int *)(param_2 + 0x10748) == 0) {
    param_1[0x10760] = 0;
    param_1[0x10761] = 0;
    param_1[0x10762] = 0;
    param_1[0x10763] = 0;
    param_1[0x10750] = 0;
    param_1[0x10751] = 0;
    param_1[0x10752] = 0;
    param_1[0x10753] = 0;
    param_1[0x10754] = 0;
    param_1[0x10755] = 0;
    param_1[0x10756] = 0;
    param_1[0x10757] = 0;
    param_1[0x10758] = 0;
    param_1[0x10759] = 0;
    param_1[0x1075a] = 0;
    param_1[0x1075b] = 0;
    param_1[0x1075c] = 0;
    param_1[0x1075d] = 0;
    param_1[0x1075e] = 0;
    param_1[0x1075f] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x10760] = 2;
    param_1[0x1075c] = 0;
    param_1[0x1075d] = 0;
    param_1[0x1075e] = 0;
    param_1[0x1075f] = 0;
    param_1[0x1074c] = 0;
    param_1[0x1074d] = 0;
    param_1[0x1074e] = 0;
    param_1[0x1074f] = 0;
    param_1[0x10750] = 0;
    param_1[0x10751] = 0;
    param_1[0x10752] = 0;
    param_1[0x10753] = 0;
    param_1[0x10754] = 0;
    param_1[0x10755] = 0;
    param_1[0x10756] = 0;
    param_1[0x10757] = 0;
    param_1[0x10758] = 0;
    param_1[0x10759] = 0;
    param_1[0x1075a] = 0;
    param_1[0x1075b] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10748);
    uVar8 = *(undefined8 *)(param_2 + 0x10750);
    uVar7 = *(undefined8 *)(param_2 + 0x10758);
    *(undefined4 *)(param_1 + 0x10760) = *(undefined4 *)(param_2 + 0x10760);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x10750) = uVar8;
    *(undefined8 *)(param_1 + 0x10758) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x10764) = *(undefined4 *)(param_2 + 0x10764);
  uVar1 = **(uint **)PTR_DAT_04bb3448;
  if (uVar1 < 0x10) {
    lVar9 = *(long *)(&DAT_0417b490 + (long)(int)uVar1 * 8);
  }
  else {
    lVar9 = 1;
  }
  uVar1 = **(uint **)PTR_DAT_04bb3448;
  pbVar5 = param_1 + lVar9 * 0x2c + 0x10768;
  if (uVar1 < 0x10) {
    lVar9 = *(long *)(&DAT_0417b490 + (long)(int)uVar1 * 8);
  }
  else {
    lVar9 = 1;
  }
  pbVar6 = param_2 + lVar9 * 0x2c + 0x10768;
  uVar3 = *(undefined8 *)(pbVar6 + 8);
  *(undefined8 *)pbVar5 = *(undefined8 *)pbVar6;
  *(undefined8 *)(pbVar5 + 8) = uVar3;
  uVar7 = *(undefined8 *)(pbVar6 + 0x20);
  uVar3 = *(undefined8 *)(pbVar6 + 0x10);
  uVar8 = *(undefined8 *)(pbVar6 + 0x18);
  *(undefined4 *)(pbVar5 + 0x28) = *(undefined4 *)(pbVar6 + 0x28);
  *(undefined8 *)(pbVar5 + 0x18) = uVar8;
  *(undefined8 *)(pbVar5 + 0x20) = uVar7;
  *(undefined8 *)(pbVar5 + 0x10) = uVar3;
  memcpy(param_1 + 0x1094c,param_2 + 0x1094c,0x420);
  memcpy(param_1 + 0x10d6c,param_2 + 0x10d6c,0x580);
  memcpy(param_1 + 0x112ec,param_2 + 0x112ec,0x1300);
  *(undefined2 *)(param_1 + 0x125ec) = *(undefined2 *)(param_2 + 0x125ec);
  param_1[0x125ee] = param_2[0x125ee];
  param_1[0x125ef] = param_2[0x125ef];
  *(undefined4 *)(param_1 + 0x125f0) = *(undefined4 *)(param_2 + 0x125f0);
  pbVar5 = param_1 + 0x125f4;
  if (*(int *)(param_2 + 0x125f4) == 0) {
    param_1[0x1260c] = 0;
    param_1[0x1260d] = 0;
    param_1[0x1260e] = 0;
    param_1[0x1260f] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x125fc] = 0;
    param_1[0x125fd] = 0;
    param_1[0x125fe] = 0;
    param_1[0x125ff] = 0;
    param_1[0x12600] = 0;
    param_1[0x12601] = 0;
    param_1[0x12602] = 0;
    param_1[0x12603] = 0;
    param_1[0x12604] = 0;
    param_1[0x12605] = 0;
    param_1[0x12606] = 0;
    param_1[0x12607] = 0;
    param_1[0x12608] = 0;
    param_1[0x12609] = 0;
    param_1[0x1260a] = 0;
    param_1[0x1260b] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x125f4);
    uVar8 = *(undefined8 *)(param_2 + 0x125fc);
    uVar7 = *(undefined8 *)(param_2 + 0x12604);
    *(undefined4 *)(param_1 + 0x1260c) = *(undefined4 *)(param_2 + 0x1260c);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x125fc) = uVar8;
    *(undefined8 *)(param_1 + 0x12604) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x12610) = *(undefined4 *)(param_2 + 0x12610);
  param_1[0x12614] = param_2[0x12614];
  param_1[0x12615] = param_2[0x12615];
  param_1[0x12617] = param_2[0x12617];
  *(undefined2 *)(param_1 + 0x12618) = *(undefined2 *)(param_2 + 0x12618);
  param_1[0x1261a] = param_2[0x1261a];
  param_1[0x1261b] = param_2[0x1261b];
  *(undefined4 *)(param_1 + 0x1261c) = *(undefined4 *)(param_2 + 0x1261c);
  pbVar5 = param_1 + 0x12620;
  if (*(int *)(param_2 + 0x12620) == 0) {
    param_1[0x12638] = 0;
    param_1[0x12639] = 0;
    param_1[0x1263a] = 0;
    param_1[0x1263b] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x12628] = 0;
    param_1[0x12629] = 0;
    param_1[0x1262a] = 0;
    param_1[0x1262b] = 0;
    param_1[0x1262c] = 0;
    param_1[0x1262d] = 0;
    param_1[0x1262e] = 0;
    param_1[0x1262f] = 0;
    param_1[0x12630] = 0;
    param_1[0x12631] = 0;
    param_1[0x12632] = 0;
    param_1[0x12633] = 0;
    param_1[0x12634] = 0;
    param_1[0x12635] = 0;
    param_1[0x12636] = 0;
    param_1[0x12637] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x12620);
    uVar8 = *(undefined8 *)(param_2 + 0x12628);
    uVar7 = *(undefined8 *)(param_2 + 0x12630);
    *(undefined4 *)(param_1 + 0x12638) = *(undefined4 *)(param_2 + 0x12638);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x12628) = uVar8;
    *(undefined8 *)(param_1 + 0x12630) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x1263c) = *(undefined4 *)(param_2 + 0x1263c);
  param_1[0x12640] = param_2[0x12640];
  param_1[0x12641] = param_2[0x12641];
  param_1[0x12643] = param_2[0x12643];
  *(undefined2 *)(param_1 + 0x12644) = *(undefined2 *)(param_2 + 0x12644);
  param_1[0x12646] = param_2[0x12646];
  param_1[0x12647] = param_2[0x12647];
  *(undefined4 *)(param_1 + 0x12648) = *(undefined4 *)(param_2 + 0x12648);
  pbVar5 = param_1 + 0x1264c;
  if (*(int *)(param_2 + 0x1264c) == 0) {
    param_1[0x12664] = 0;
    param_1[0x12665] = 0;
    param_1[0x12666] = 0;
    param_1[0x12667] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x12654] = 0;
    param_1[0x12655] = 0;
    param_1[0x12656] = 0;
    param_1[0x12657] = 0;
    param_1[0x12658] = 0;
    param_1[0x12659] = 0;
    param_1[0x1265a] = 0;
    param_1[0x1265b] = 0;
    param_1[0x1265c] = 0;
    param_1[0x1265d] = 0;
    param_1[0x1265e] = 0;
    param_1[0x1265f] = 0;
    param_1[0x12660] = 0;
    param_1[0x12661] = 0;
    param_1[0x12662] = 0;
    param_1[0x12663] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x1264c);
    uVar8 = *(undefined8 *)(param_2 + 0x12654);
    uVar7 = *(undefined8 *)(param_2 + 0x1265c);
    *(undefined4 *)(param_1 + 0x12664) = *(undefined4 *)(param_2 + 0x12664);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x12654) = uVar8;
    *(undefined8 *)(param_1 + 0x1265c) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x12668) = *(undefined4 *)(param_2 + 0x12668);
  param_1[0x1266c] = param_2[0x1266c];
  param_1[0x1266d] = param_2[0x1266d];
  param_1[0x1266f] = param_2[0x1266f];
  *(undefined2 *)(param_1 + 0x1315c) = *(undefined2 *)(param_2 + 0x1315c);
  param_1[0x1315e] = param_2[0x1315e];
  param_1[0x1315f] = param_2[0x1315f];
  *(undefined4 *)(param_1 + 0x13160) = *(undefined4 *)(param_2 + 0x13160);
  pbVar5 = param_1 + 0x13164;
  if (*(int *)(param_2 + 0x13164) == 0) {
    param_1[0x1317c] = 0;
    param_1[0x1317d] = 0;
    param_1[0x1317e] = 0;
    param_1[0x1317f] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x1316c] = 0;
    param_1[0x1316d] = 0;
    param_1[0x1316e] = 0;
    param_1[0x1316f] = 0;
    param_1[0x13170] = 0;
    param_1[0x13171] = 0;
    param_1[0x13172] = 0;
    param_1[0x13173] = 0;
    param_1[0x13174] = 0;
    param_1[0x13175] = 0;
    param_1[0x13176] = 0;
    param_1[0x13177] = 0;
    param_1[0x13178] = 0;
    param_1[0x13179] = 0;
    param_1[0x1317a] = 0;
    param_1[0x1317b] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x13164);
    uVar8 = *(undefined8 *)(param_2 + 0x1316c);
    uVar7 = *(undefined8 *)(param_2 + 0x13174);
    *(undefined4 *)(param_1 + 0x1317c) = *(undefined4 *)(param_2 + 0x1317c);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x1316c) = uVar8;
    *(undefined8 *)(param_1 + 0x13174) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x13180) = *(undefined4 *)(param_2 + 0x13180);
  param_1[0x13184] = param_2[0x13184];
  param_1[0x13185] = param_2[0x13185];
  param_1[0x13187] = param_2[0x13187];
  *(undefined2 *)(param_1 + 0x13188) = *(undefined2 *)(param_2 + 0x13188);
  param_1[0x1318a] = param_2[0x1318a];
  param_1[0x1318b] = param_2[0x1318b];
  *(undefined4 *)(param_1 + 0x1318c) = *(undefined4 *)(param_2 + 0x1318c);
  pbVar5 = param_1 + 0x13190;
  if (*(int *)(param_2 + 0x13190) == 0) {
    param_1[0x131a8] = 0;
    param_1[0x131a9] = 0;
    param_1[0x131aa] = 0;
    param_1[0x131ab] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x13198] = 0;
    param_1[0x13199] = 0;
    param_1[0x1319a] = 0;
    param_1[0x1319b] = 0;
    param_1[0x1319c] = 0;
    param_1[0x1319d] = 0;
    param_1[0x1319e] = 0;
    param_1[0x1319f] = 0;
    param_1[0x131a0] = 0;
    param_1[0x131a1] = 0;
    param_1[0x131a2] = 0;
    param_1[0x131a3] = 0;
    param_1[0x131a4] = 0;
    param_1[0x131a5] = 0;
    param_1[0x131a6] = 0;
    param_1[0x131a7] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x13190);
    uVar8 = *(undefined8 *)(param_2 + 0x13198);
    uVar7 = *(undefined8 *)(param_2 + 0x131a0);
    *(undefined4 *)(param_1 + 0x131a8) = *(undefined4 *)(param_2 + 0x131a8);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x13198) = uVar8;
    *(undefined8 *)(param_1 + 0x131a0) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x131ac) = *(undefined4 *)(param_2 + 0x131ac);
  param_1[0x131b0] = param_2[0x131b0];
  param_1[0x131b1] = param_2[0x131b1];
  param_1[0x131b3] = param_2[0x131b3];
  *(undefined2 *)(param_1 + 0x131b4) = *(undefined2 *)(param_2 + 0x131b4);
  param_1[0x131b6] = param_2[0x131b6];
  param_1[0x131b7] = param_2[0x131b7];
  *(undefined4 *)(param_1 + 0x131b8) = *(undefined4 *)(param_2 + 0x131b8);
  pbVar5 = param_1 + 0x131bc;
  if (*(int *)(param_2 + 0x131bc) == 0) {
    param_1[0x131d4] = 0;
    param_1[0x131d5] = 0;
    param_1[0x131d6] = 0;
    param_1[0x131d7] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x131c4] = 0;
    param_1[0x131c5] = 0;
    param_1[0x131c6] = 0;
    param_1[0x131c7] = 0;
    param_1[0x131c8] = 0;
    param_1[0x131c9] = 0;
    param_1[0x131ca] = 0;
    param_1[0x131cb] = 0;
    param_1[0x131cc] = 0;
    param_1[0x131cd] = 0;
    param_1[0x131ce] = 0;
    param_1[0x131cf] = 0;
    param_1[0x131d0] = 0;
    param_1[0x131d1] = 0;
    param_1[0x131d2] = 0;
    param_1[0x131d3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x131bc);
    uVar8 = *(undefined8 *)(param_2 + 0x131c4);
    uVar7 = *(undefined8 *)(param_2 + 0x131cc);
    *(undefined4 *)(param_1 + 0x131d4) = *(undefined4 *)(param_2 + 0x131d4);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x131c4) = uVar8;
    *(undefined8 *)(param_1 + 0x131cc) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x131d8) = *(undefined4 *)(param_2 + 0x131d8);
  param_1[0x131dc] = param_2[0x131dc];
  param_1[0x131dd] = param_2[0x131dd];
  param_1[0x131df] = param_2[0x131df];
  *(undefined2 *)(param_1 + 0x131e0) = *(undefined2 *)(param_2 + 0x131e0);
  param_1[0x131e2] = param_2[0x131e2];
  param_1[0x131e3] = param_2[0x131e3];
  *(undefined4 *)(param_1 + 0x131e4) = *(undefined4 *)(param_2 + 0x131e4);
  pbVar5 = param_1 + 0x131e8;
  if (*(int *)(param_2 + 0x131e8) == 0) {
    param_1[0x13200] = 0;
    param_1[0x13201] = 0;
    param_1[0x13202] = 0;
    param_1[0x13203] = 0;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x131f0] = 0;
    param_1[0x131f1] = 0;
    param_1[0x131f2] = 0;
    param_1[0x131f3] = 0;
    param_1[0x131f4] = 0;
    param_1[0x131f5] = 0;
    param_1[0x131f6] = 0;
    param_1[0x131f7] = 0;
    param_1[0x131f8] = 0;
    param_1[0x131f9] = 0;
    param_1[0x131fa] = 0;
    param_1[0x131fb] = 0;
    param_1[0x131fc] = 0;
    param_1[0x131fd] = 0;
    param_1[0x131fe] = 0;
    param_1[0x131ff] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x131e8);
    uVar8 = *(undefined8 *)(param_2 + 0x131f0);
    uVar7 = *(undefined8 *)(param_2 + 0x131f8);
    *(undefined4 *)(param_1 + 0x13200) = *(undefined4 *)(param_2 + 0x13200);
    *(undefined8 *)pbVar5 = uVar3;
    *(undefined8 *)(param_1 + 0x131f0) = uVar8;
    *(undefined8 *)(param_1 + 0x131f8) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x13204) = *(undefined4 *)(param_2 + 0x13204);
  param_1[0x13208] = param_2[0x13208];
  param_1[0x13209] = param_2[0x13209];
  param_1[0x1320b] = param_2[0x1320b];
  uVar4 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x12670),(uint)param_2[0x12672],
                     (uint)param_2[0x12673]);
  if ((uVar4 & 1) == 0) {
    param_1[0x12670] = 0;
    param_1[0x12671] = 0;
    param_1[0x12672] = 0;
    param_1[0x12673] = 0;
  }
  else {
    uVar3 = FUN_0272eca4(param_2 + 0x12670,1);
    uVar4 = nn::time::IsValidDate
                      ((uint)uVar3 & 0xffff,(uint)uVar3 >> 0x10 & 0xff,
                       (uint)((ulong)uVar3 >> 0x18) & 0xff);
    if ((uVar4 & 1) != 0) {
      *(short *)(param_1 + 0x12670) = (short)uVar3;
      param_1[0x12672] = (byte)((ulong)uVar3 >> 0x10);
      param_1[0x12673] = (byte)((ulong)uVar3 >> 0x18);
    }
  }
  uVar4 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x12674),(uint)param_2[0x12676],
                     (uint)param_2[0x12677]);
  if ((uVar4 & 1) == 0) {
    param_1[0x12674] = 0;
    param_1[0x12675] = 0;
    param_1[0x12676] = 0;
    param_1[0x12677] = 0;
  }
  else {
    uVar3 = FUN_0272eca4(param_2 + 0x12674,1);
    uVar4 = nn::time::IsValidDate
                      ((uint)uVar3 & 0xffff,(uint)uVar3 >> 0x10 & 0xff,
                       (uint)((ulong)uVar3 >> 0x18) & 0xff);
    if ((uVar4 & 1) != 0) {
      *(short *)(param_1 + 0x12674) = (short)uVar3;
      param_1[0x12676] = (byte)((ulong)uVar3 >> 0x10);
      param_1[0x12677] = (byte)((ulong)uVar3 >> 0x18);
    }
  }
  param_1[0x12678] = param_2[0x12678];
  param_1[0x12679] = param_2[0x12679];
  param_1[0x1267a] = param_2[0x1267a];
  memcpy(param_1 + 0x1267c,param_2 + 0x1267c,0x200);
  *(undefined2 *)(param_1 + 0x1287c) = *(undefined2 *)(param_2 + 0x1287c);
  uVar3 = *(undefined8 *)(param_2 + 0x12888);
  uVar8 = *(undefined8 *)(param_2 + 0x12890);
  uVar7 = *(undefined8 *)(param_2 + 0x12898);
  *(undefined4 *)(param_1 + 0x128a0) = *(undefined4 *)(param_2 + 0x128a0);
  *(undefined8 *)(param_1 + 0x12890) = uVar8;
  *(undefined8 *)(param_1 + 0x12898) = uVar7;
  *(undefined8 *)(param_1 + 0x12888) = uVar3;
  *(undefined8 *)(param_1 + 0x12880) = *(undefined8 *)(param_2 + 0x12880);
  *(undefined4 *)(param_1 + 0x128a8) = *(undefined4 *)(param_2 + 0x128a8);
  *(undefined4 *)(param_1 + 0x128ac) = *(undefined4 *)(param_2 + 0x128ac);
  *(undefined8 *)(param_1 + 0x128b0) = *(undefined8 *)(param_2 + 0x128b0);
  uVar3 = *(undefined8 *)(param_2 + 0x128c0);
  uVar8 = *(undefined8 *)(param_2 + 0x128c8);
  uVar7 = *(undefined8 *)(param_2 + 0x128d8);
  *(undefined8 *)(param_1 + 0x128d0) = *(undefined8 *)(param_2 + 0x128d0);
  *(undefined8 *)(param_1 + 0x128d8) = uVar7;
  *(undefined8 *)(param_1 + 0x128c0) = uVar3;
  *(undefined8 *)(param_1 + 0x128c8) = uVar8;
  *(undefined8 *)(param_1 + 0x128b8) = *(undefined8 *)(param_2 + 0x128b8);
  uVar3 = *(undefined8 *)(param_2 + 76000);
  uVar8 = *(undefined8 *)(param_2 + 0x128e8);
  uVar7 = *(undefined8 *)(param_2 + 0x128f0);
  param_1[0x128f8] = param_2[0x128f8];
  *(undefined8 *)(param_1 + 0x128e8) = uVar8;
  *(undefined8 *)(param_1 + 0x128f0) = uVar7;
  *(undefined8 *)(param_1 + 76000) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x128fc);
  uVar8 = *(undefined8 *)(param_2 + 0x12904);
  *(undefined8 *)(param_1 + 0x1290c) = *(undefined8 *)(param_2 + 0x1290c);
  *(undefined8 *)(param_1 + 0x12904) = uVar8;
  *(undefined8 *)(param_1 + 0x128fc) = uVar3;
  uVar1 = *(uint *)(param_2 + 0x12914);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x12914) = uVar1;
  param_1[0x12918] = param_2[0x12918];
  param_1[0x12919] = param_2[0x12919];
  *(undefined2 *)(param_1 + 0x1291a) = *(undefined2 *)(param_2 + 0x1291a);
  uVar3 = *(undefined8 *)(param_2 + 0x12928);
  *(undefined8 *)(param_1 + 0x12920) = *(undefined8 *)(param_2 + 0x12920);
  *(undefined8 *)(param_1 + 0x12928) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x12938);
  uVar8 = *(undefined8 *)(param_2 + 0x12940);
  uVar7 = *(undefined8 *)(param_2 + 0x12930);
  *(undefined8 *)(param_1 + 0x12945) = *(undefined8 *)(param_2 + 0x12945);
  *(undefined8 *)(param_1 + 0x12938) = uVar3;
  *(undefined8 *)(param_1 + 0x12940) = uVar8;
  *(undefined8 *)(param_1 + 0x12930) = uVar7;
  memcpy(param_1 + 0x1294d,param_2 + 0x1294d,0x800);
  bVar2 = param_2[0x1314d];
  param_1[0x1314e] = 0;
  param_1[0x1314f] = 0;
  param_1[0x1314d] = bVar2;
  FUN_027c1b80(param_1 + 0x128a8);
  param_1[0x13150] = param_2[0x13150];
  param_1[0x13151] = param_2[0x13151];
  param_1[0x13152] = param_2[0x13152];
  param_1[0x13153] = param_2[0x13153];
  *(undefined2 *)(param_1 + 0x13154) = *(undefined2 *)(param_2 + 0x13154);
  param_1[0x13156] = param_2[0x13156];
  param_1[0x13157] = param_2[0x13157];
  param_1[0x13158] = param_2[0x13158];
  param_1[0x13159] = param_2[0x13159];
  param_1[0x1315a] = param_2[0x1315a];
  param_1[0x1315b] = param_2[0x1315b];
  *(undefined2 *)(param_1 + 0x1320c) = *(undefined2 *)(param_2 + 0x1320c);
  param_1[0x1320e] = param_2[0x1320e];
  param_1[0x1320f] = param_2[0x1320f];
  *(undefined4 *)(param_1 + 0x13210) = *(undefined4 *)(param_2 + 0x13210);
  *(undefined2 *)(param_1 + 0x13214) = *(undefined2 *)(param_2 + 0x13214);
  param_1[0x13216] = param_2[0x13216];
  param_1[0x13217] = param_2[0x13217];
  *(undefined4 *)(param_1 + 0x13218) = *(undefined4 *)(param_2 + 0x13218);
  *(undefined2 *)(param_1 + 0x1321c) = *(undefined2 *)(param_2 + 0x1321c);
  param_1[0x1321e] = param_2[0x1321e];
  param_1[0x1321f] = param_2[0x1321f];
  *(undefined4 *)(param_1 + 0x13220) = *(undefined4 *)(param_2 + 0x13220);
  *(undefined2 *)(param_1 + 0x13224) = *(undefined2 *)(param_2 + 0x13224);
  param_1[0x13226] = param_2[0x13226];
  param_1[0x13227] = param_2[0x13227];
  *(undefined4 *)(param_1 + 0x13228) = *(undefined4 *)(param_2 + 0x13228);
  return;
}

