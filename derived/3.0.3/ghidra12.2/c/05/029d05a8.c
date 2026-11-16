
void FUN_029d05a8(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 local_58;
  undefined4 local_50;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  bVar3 = *(byte *)(param_2 + 1);
  cVar4 = *(char *)((long)param_2 + 10);
  if ((1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) && DAT_055eaae0 != 0) &&
     (*(char *)(DAT_055eaae0 + 0xa8) != '\0')) {
    iVar14 = *(int *)(DAT_055eaae0 + 0x48);
    iVar13 = *(int *)(DAT_055eaae0 + 0x4c);
    iVar12 = *(int *)(DAT_055eaae0 + 0x50);
    iVar11 = *(int *)(DAT_055eaae0 + 0x54);
    if ((iVar13 == 0 && iVar14 == 0) && (iVar12 == 0 && iVar11 == 0)) {
      iVar11 = 0x48077044;
      iVar12 = 0x714acb41;
      iVar13 = 0x6c078967;
      iVar14 = 1;
    }
    *(int *)(param_1 + 0xc) = iVar14;
    *(int *)(param_1 + 0x10) = iVar13;
    *(int *)(param_1 + 0x14) = iVar12;
    *(int *)(param_1 + 0x18) = iVar11;
  }
  cVar5 = *(char *)((long)param_2 + 9);
  uVar10 = (uint)cVar5;
  if (cVar5 != *(char *)(param_1 + 0x20)) {
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (cVar4 == '\0') goto LAB_029d081c;
  cVar4 = *(char *)((long)param_2 + 0xb);
  if ((-1 < (int)uVar10) && (bVar3 < 0x40)) {
    if ((uint)bVar3 * -0x33333333 < 0x33333334) {
      uVar1 = uVar10 % 10;
      if (uVar1 < 6) {
        if ((uVar1 & 1) != 0) goto LAB_029d080c;
        if (uVar1 == 0) goto LAB_029d07cc;
LAB_029d07f0:
        uVar9 = 1;
      }
      else {
        if ((uVar1 & 1) != 0) goto LAB_029d080c;
        if ((uVar1 >> 1 & 1) == 0) goto LAB_029d07f0;
        uVar9 = 0;
      }
      bVar6 = false;
    }
    else {
      if ((uint)bVar3 * -0x55555555 < 0x55555556) {
        if ((uVar10 & 1) != 0) goto LAB_029d080c;
        if (0x2aaaaaaa < (uVar10 * -0x55555555 >> 1 | uVar10 * -0x80000000)) goto LAB_029d07f0;
      }
      else {
        if ((uVar10 & 1) != 0) {
LAB_029d080c:
          FUN_029d0844(param_1,*param_2,cVar4 != '\0');
          goto LAB_029d081c;
        }
        if ((uVar10 >> 1 & 1) != 0) goto LAB_029d07f0;
      }
LAB_029d07cc:
      bVar6 = uVar10 == 0;
      uVar9 = 0;
    }
    FUN_029d0994(param_1,*param_2,uVar9,bVar6,cVar4 != '\0');
    goto LAB_029d081c;
  }
  uVar1 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 0xc) << 0xb;
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar15 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  uVar10 = uVar1 ^ uVar2;
  *(uint *)(param_1 + 0x14) = uVar2;
  *(uint *)(param_1 + 0x18) = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar10;
  if (lVar15 == 0) goto LAB_029d081c;
  uVar10 = uVar10 >> 0x1d;
  if (cVar4 == '\0') {
LAB_029d06fc:
    puVar16 = (undefined8 *)(&PTR_DAT_04a98608)[uVar10];
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar10);
    if (uVar10 < 4) {
      uVar10 = uVar10 + 4;
      goto LAB_029d06fc;
    }
    if (uVar10 < 8) goto LAB_029d06fc;
    puVar16 = &DAT_0407ebb1;
  }
  local_58 = 0;
  local_50 = 0;
  lVar7 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x20))();
  if (((puVar16 != (undefined8 *)0x0) && (*(char *)(lVar7 + 0x78) != '\0')) &&
     (uVar8 = FUN_03bf46a8(lVar15,"searchAndEmit(%s)",puVar16), (uVar8 & 1) != 0)) {
    local_38 = 0;
    local_48 = PTR_DAT_04bcadf8 + 0x10;
    local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x18),puVar16);
    if (local_40 != 0) {
      FUN_03bf47b0(lVar15,&local_48,&local_58);
    }
  }
LAB_029d081c:
  *(char *)(param_1 + 0x20) = cVar5;
  return;
}

