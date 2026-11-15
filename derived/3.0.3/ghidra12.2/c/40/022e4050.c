
undefined8 FUN_022e4050(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined8 *local_30;
  int local_28;
  int iStack_24;
  undefined1 auStack_8 [8];
  
  local_40 = 0;
  local_30 = &DAT_048f9750;
  local_48 = &PTR_LAB_049ffa38;
  fVar7 = (float)*(int *)(param_2 + 0xc) * 10.0 + 2.5;
  fVar6 = (float)*(int *)(param_2 + 8) * 10.0 + 2.5;
  local_28 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iStack_24 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar5 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  FUN_01a5033c(auStack_8,&local_48,0,&local_30,0);
  lVar1 = DAT_05150358;
  if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
     (((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
    uVar3 = FUN_0277d6c4(auStack_8);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(auStack_60,auStack_8);
      uVar4 = FUN_0124dcb0(auStack_60);
      if (((uVar4 & 1) == 0) && (uVar4 = FUN_0123d890(local_50,4), (uVar4 & 1) == 0)) {
        iVar2 = FUN_0123db50(auStack_58,local_50);
        if ((((((iVar2 - 2U & 0xfffffff9) != 0) &&
              (iVar2 = FUN_0123db50(auStack_58,local_50), 6 < iVar2 - 0xbU)) &&
             (iVar2 = FUN_0123db50(auStack_58,local_50), 5 < iVar2 - 0x12U)) &&
            ((iVar2 = FUN_0123db50(auStack_58,local_50), 6 < iVar2 - 0x18U &&
             (iVar2 = FUN_0123db50(auStack_58,local_50), iVar2 != 0x1f)))) &&
           ((iVar2 = FUN_0123db50(auStack_58,local_50), 8 < iVar2 - 0x23U &&
            (iVar2 = FUN_0123db50(auStack_58,local_50), iVar2 != 0x2e)))) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

