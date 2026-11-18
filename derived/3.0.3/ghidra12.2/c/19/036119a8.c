
void FUN_036119a8(long param_1)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  long lVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  undefined2 uVar15;
  short sVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  
  iVar3 = *(int *)(param_1 + 0x410);
  uVar2 = *(int *)(param_1 + 0x408) + 8;
  *(uint *)(param_1 + 0x408) = uVar2;
  if (*(char *)(param_1 + 0x4fa) < '\0') {
    if (iVar3 < 2) {
      FUN_03611480(param_1);
    }
    else {
      if (*(int *)(param_1 + 0x40c) != 0) {
        FUN_03611480(param_1);
      }
      FUN_036110c0(param_1 + 0x418);
      FUN_03611308(param_1 + 0x450);
      bVar10 = *(byte *)(param_1 + 0x498);
      if ((bVar10 & 1) == 0) {
        FUN_036094bc(param_1 + 0x488);
        bVar10 = *(byte *)(param_1 + 0x498);
      }
      *(byte *)(param_1 + 0x498) = bVar10 + 1 & 7;
      FUN_03609a3c(param_1 + 0x4c8);
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -2;
    }
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x504);
    uVar18 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x50c) >> 0x20);
    uVar8 = *(undefined8 *)*pauVar1;
    auVar6._12_4_ = uVar18;
    auVar6._0_12_ = *pauVar1;
    auVar7._12_4_ = uVar18;
    auVar7._0_12_ = *pauVar1;
    auVar19 = NEON_ext(auVar6,auVar7,8,1);
    uVar5 = *(undefined8 *)(param_1 + 0x4fc);
    sVar13 = (short)((ulong)uVar5 >> 0x10);
    sVar14 = (short)((ulong)uVar5 >> 0x20);
    sVar16 = (short)((ulong)uVar5 >> 0x30);
    iVar12 = (int)(short)uVar5 * (int)(short)uVar8 +
             (int)sVar13 * (int)(short)((ulong)uVar8 >> 0x10) +
             (int)sVar14 * (int)(short)((ulong)uVar8 >> 0x20) +
             (int)sVar16 * (int)(short)((ulong)uVar8 >> 0x30);
    iVar3 = (int)(short)uVar5 * (int)auVar19._0_2_ + (int)sVar13 * (int)auVar19._2_2_ +
            (int)sVar14 * (int)auVar19._4_2_ + (int)sVar16 * (int)auVar19._6_2_;
    uVar15 = (undefined2)iVar3;
    uVar17 = (undefined2)((uint)iVar3 >> 0x10);
    auVar19._4_2_ = uVar15;
    auVar19._0_4_ = iVar12;
    auVar19._6_2_ = uVar17;
    auVar19._8_8_ = 0;
    uVar5 = NEON_sqxtn(CONCAT26(uVar17,CONCAT24(uVar15,iVar12)),auVar19,4);
    uVar18 = (undefined4)uVar5;
    if (*(char *)(param_1 + 0x4fa) < '\0') {
      bVar9 = true;
      if (((*(char *)(param_1 + 0x419) == '\0') && (*(char *)(param_1 + 0x451) == '\0')) &&
         (*(char *)(param_1 + 0x489) == '\0')) {
        bVar9 = *(char *)(param_1 + 0x4c9) != '\0';
      }
    }
    else {
      bVar9 = false;
    }
  }
  else {
    uVar18 = 0;
    iVar12 = -2;
    if (iVar3 < 2) {
      iVar12 = 0;
    }
    bVar9 = false;
    *(int *)(param_1 + 0x410) = iVar12 + iVar3;
  }
  *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + 2;
  lVar11 = *(long *)(param_1 + 0x14a8);
  uVar4 = *(uint *)(lVar11 + 0x200);
  *(undefined4 *)(lVar11 + (ulong)uVar4 * 4) = uVar18;
  *(bool *)(lVar11 + (ulong)uVar4 + 0x204) = bVar9;
  *(uint *)(lVar11 + 0x200) = uVar4 + 1;
  *(int *)(param_1 + 0x1068) = *(int *)(param_1 + 0x1068) + 2;
  if (0x3f < uVar2) {
    *(undefined4 *)(param_1 + 0x514) = 0;
    iVar3 = *(byte *)(param_1 + 0x106c) + 1;
    *(char *)(param_1 + 0x106c) = (char)iVar3;
    if (iVar3 == 0x10) {
      FUN_036117f0(param_1,0);
      *(undefined1 *)(param_1 + 0x106c) = 0;
    }
    *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -0x40;
  }
  *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + -8;
  return;
}

