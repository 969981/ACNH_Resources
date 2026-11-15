
bool FUN_021f4480(undefined4 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  bool bVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  long local_60;
  undefined4 *local_58;
  char *pcStack_50;
  char local_44 [4];
  
  FUN_02507c6c(&local_68,1,1,1,0);
  puVar10 = PTR_DAT_04bb5038;
  uVar16 = (uint)(byte)local_68;
  local_70 = local_68._4_4_;
  bVar7 = 0xff;
  if ((byte)local_68 < 8) {
    bVar7 = (byte)local_68;
  }
  local_74 = CONCAT31(local_74._1_3_,bVar7);
  local_6c = (undefined2)local_60;
  if ((byte)local_68 < 8) {
    while( true ) {
      local_44[0] = (char)uVar16;
      pfVar12 = (float *)FUN_0251b3b0(local_44,0);
      if (pfVar12 != (float *)0x0) {
        iVar3 = *(int *)(param_2 + 0x10);
        iVar5 = *(int *)(param_2 + 0x14);
        iVar4 = *(int *)(param_2 + 0x20);
        iVar6 = *(int *)(param_2 + 0x24);
        iVar8 = (int)((float)(int)(*pfVar12 + -2.5) / 5.0) - (uint)(*pfVar12 + -2.5 < 0.0);
        iVar1 = iVar8 + 1;
        iVar9 = (int)((float)(int)(pfVar12[2] + -2.5) / 5.0) - (uint)(pfVar12[2] + -2.5 < 0.0);
        iVar2 = iVar9 + 1;
        if ((((iVar3 <= iVar8 && iVar1 <= iVar4) && iVar5 <= iVar9) && iVar2 == iVar6 ||
             (((iVar3 <= iVar8 && iVar1 <= iVar4) && iVar5 <= iVar9) && iVar2 - iVar6 < 0) !=
             (((iVar3 <= iVar8 && iVar1 <= iVar4) && iVar5 <= iVar9) && SBORROW4(iVar2,iVar6))) ||
           (((iVar3 <= iVar1 && iVar8 <= iVar4) && iVar9 <= iVar6) && iVar5 <= iVar2)) {
          return true;
        }
      }
      uVar17 = (ulong)uVar16;
      do {
        if (uVar17 == 7) goto LAB_021f44e0;
        uVar17 = uVar17 + 1;
        uVar13 = FUN_02507924(&local_74,puVar10 + uVar17);
      } while ((uVar13 & 1) == 0);
      bVar7 = puVar10[uVar17];
      uVar16 = (uint)bVar7;
      if (7 < uVar16) break;
      local_74 = CONCAT31(local_74._1_3_,bVar7);
    }
  }
LAB_021f44e0:
  local_74 = *param_1;
  local_44[0] = '\0';
  pcStack_50 = local_44;
  local_68 = &PTR_FUN_04a77158;
  local_58 = &local_74;
  if (*(int *)(DAT_053e0208 + 0xb88) == 0) {
    bVar11 = false;
  }
  else {
    lVar15 = (long)*(int *)(DAT_053e0208 + 0xb88) << 3;
    puVar14 = *(undefined8 **)(DAT_053e0208 + 0xb90);
    local_60 = param_2;
    do {
      (*(code *)*local_68)(&local_68,*puVar14);
      lVar15 = lVar15 + -8;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
    bVar11 = local_44[0] != '\0';
  }
  return bVar11;
}

