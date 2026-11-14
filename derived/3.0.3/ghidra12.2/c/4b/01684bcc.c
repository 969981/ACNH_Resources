
void FUN_01684bcc(long param_1)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *local_68;
  undefined1 *puStack_60;
  float local_58 [2];
  float local_50;
  float afStack_4c [2];
  float fStack_44;
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar11 = 0;
      if (lVar10 != 0) {
        lVar11 = lVar10 + 0x70;
      }
      goto LAB_01684c44;
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar11 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
      goto LAB_01684c44;
    }
  }
  lVar11 = 0;
LAB_01684c44:
  plVar1 = (long *)(lVar11 + 0x1bf240);
  if ((*(long **)(lVar11 + 0x1bf260) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x1bf260), puVar12 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar12)();
    uVar7 = uVar7 ^ 1;
  }
  iVar8 = FUN_028d6b0c(*(long *)(lVar11 + 0x1bf248) + *plVar1);
  puVar5 = PTR_DAT_04bb2020;
  if (iVar8 == 1) {
    local_68 = PTR_DAT_04bb2020 + 0x10;
    puStack_60 = &DAT_040eeb6a;
    uVar9 = FUN_028d7d60(*(long *)(lVar11 + 0x1bf248) + *plVar1,&local_68,afStack_4c);
    uVar9 = uVar9 & 1;
  }
  else {
    uVar9 = 0;
  }
  iVar8 = FUN_028d6b0c(*(long *)(lVar11 + 0x1bf248) + *plVar1);
  if (iVar8 == 0xb) {
    local_68 = puVar5 + 0x10;
    puStack_60 = &DAT_04076b39;
    bVar6 = FUN_028d7d60(*(long *)(lVar11 + 0x1bf248) + *plVar1,&local_68,local_58);
  }
  else {
    bVar6 = 0;
  }
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0x1bf260) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x1bf260) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((uVar9 == 0 & (bVar6 ^ 1)) == 0) {
    bVar4 = ((bVar6 ^ 0xff) & 1) == 0;
    pfVar2 = afStack_4c;
    if (uVar9 == 0 && bVar4) {
      pfVar2 = local_58;
    }
    pfVar3 = &fStack_44;
    if (uVar9 == 0 && bVar4) {
      pfVar3 = &local_50;
    }
    uVar7 = (int)((float)(int)*pfVar2 / 5.0) - (uint)(*pfVar2 < 0.0);
    if (DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) {
      iVar8 = (int)((float)(int)*pfVar3 / 5.0) - (uint)(*pfVar3 < 0.0);
      uVar9 = (iVar8 * 0x80 & 0xffffff00U) + ((int)uVar7 >> 1);
      if ((DAT_05233974 <= iVar8 && iVar8 <= DAT_05233984) && uVar9 >> 0xf == 0) {
        param_1 = param_1 + (ulong)(uVar9 >> 5) * 4;
        *(uint *)(param_1 + 0x19058) =
             *(uint *)(param_1 + 0x19058) & (1 << (ulong)(uVar7 >> 1 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  return;
}

