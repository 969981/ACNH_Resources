
void FUN_0286a648(undefined4 *param_1,undefined4 *param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = &PTR_FUN_04a36b50;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
        local_58 = lVar10;
      }
    }
  }
  iVar5 = FUN_01ad7260(&local_68);
  if ((iVar5 != 0) && (DAT_05574040 != 0)) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar10 == 0) goto LAB_0286a844;
      lVar10 = lVar10 + 0x70;
    }
    else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
            (lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar10 == 0))
    goto LAB_0286a844;
    if ((*(long **)(lVar10 + 0x1c2520) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar10 + 0x1c2520), puVar9 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar9)();
      uVar4 = uVar4 ^ 1;
    }
    iVar5 = FUN_01ad7260(&local_68);
    sVar2 = *param_3;
    iVar6 = FUN_00a82f40((int)sVar2,(char)param_3[1],*(undefined1 *)((long)param_3 + 3),1);
    bVar1 = *(byte *)(*(long *)(lVar10 + 0x1c2508) + *(long *)(lVar10 + 0x1c2500) + 1);
    iVar7 = FUN_01ad7260(&local_68);
    if (iVar7 != 0) {
      iVar6 = iVar6 + sVar2 + (uint)bVar1;
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = iVar6 / iVar5;
      }
      iVar6 = iVar6 - iVar7 * iVar5;
      if (((iVar6 == 0) || (iVar5 = FUN_01ad7260(&local_68), iVar6 < iVar5)) &&
         (puVar8 = (ushort *)FUN_01afd600(&local_68), puVar8 != (ushort *)0x0)) {
        *puVar8 = *puVar8 & 0xfff8 | (ushort)iVar6 & 7;
      }
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar10 + 0x1c2520) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x1c2520) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
LAB_0286a844:
  *param_1 = local_60;
  param_1[1] = uStack_5c;
  return;
}

