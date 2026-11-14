
undefined8 FUN_016e49e4(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar10 = DAT_05150358;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_48 = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((((((*(uint *)(puVar1 + 4) & 1) != 0) && (DAT_05150358 != 0)) &&
         (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
        ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
         (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
       ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
        ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(&local_48,param_2);
        uVar7 = FUN_01250394(&local_48,1);
        if ((uVar7 & 1) == 0) {
          FUN_0124d4b4(&local_48,param_2);
          *param_1 = local_48;
          param_1[1] = local_44;
          return 1;
        }
      }
    }
  }
  uVar4 = *param_2;
  *(undefined2 *)param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 2) = uVar2;
  uVar3 = *(undefined1 *)((long)param_2 + 3);
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  local_48 = CONCAT13(uVar3,CONCAT12(uVar2,uVar4));
  local_44 = *(undefined4 *)(param_2 + 2);
  param_1[1] = local_44;
  puVar1 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_48);
  lVar10 = DAT_05150358;
  if (*(long *)puVar1 == 0) {
LAB_016e4bb4:
    if (((DAT_05150358 != 0) &&
        (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
          (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
         (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
       (((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
         (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar6 = FUN_0277d6c4(&local_48);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_016e4b58;
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_016e4bb4;
LAB_016e4b58:
    FUN_0277e56c(&local_48,param_3 & 1);
    lVar10 = *(long *)puVar1;
    uVar6 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar1 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        uVar8 = 1;
        puVar9 = &local_48;
        goto LAB_016e4c2c;
      }
    }
  }
  uVar8 = 0;
  puVar9 = (undefined4 *)PTR_DAT_04bb37e0;
LAB_016e4c2c:
  *(undefined2 *)param_1 = *(undefined2 *)puVar9;
  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)puVar9 + 2);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar9 + 3);
  param_1[1] = puVar9[1];
  return uVar8;
}

