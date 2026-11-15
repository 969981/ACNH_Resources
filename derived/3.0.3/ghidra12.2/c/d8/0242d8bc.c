
void FUN_0242d8bc(byte *param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb6298;
  if ((*(byte *)(param_2 + 0x37) & 1) == 0) {
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    lVar6 = DAT_05150358;
    local_38 = *(undefined8 *)(param_2 + 0x38);
    sVar2 = *(short *)puVar3;
    if (sVar2 != -1) {
      local_40 = CONCAT44(local_40._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if (((((*(uint *)(puVar1 + 4) & 1) != 0) && (DAT_05150358 != 0)) &&
          (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
           (*(long *)(DAT_05150358 + 0x488) != 0)) &&
          ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
           ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
            (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))))) {
        uVar4 = FUN_0277d6c4(&local_38);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
            (((*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0 && (*param_1 < 8)) &&
             (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)))) &&
           ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')))) {
          local_40 = 0xfffe;
          FUN_0277d4ac(&local_40);
          local_40 = *(undefined8 *)(param_2 + 0x20);
          FUN_023273f8(&local_40,&local_38);
          local_44 = 0;
          FUN_02327084(param_1,&local_40,&local_44);
          goto LAB_0242da74;
        }
      }
    }
    local_40 = 0xfffe;
    FUN_0277d4ac(&local_40);
    local_40 = *(undefined8 *)(param_2 + 0x20);
    local_44 = 0;
    FUN_02326c70(param_1,&local_40,&local_44);
  }
LAB_0242da74:
  puVar1 = PTR_DAT_04bb4f78;
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == *(short *)puVar3) {
    *(undefined4 *)(lVar6 + 0xc) = 3;
    FUN_01393458(lVar6 + 0xb0);
  }
  else {
    *(undefined4 *)(lVar6 + 0xc) = 4;
  }
  if (((*param_1 < 8) && (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)) &&
     ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')))) {
    local_48[0] = *param_1;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
    lVar6 = FUN_025830c0(*(undefined8 *)puVar1,local_48,1);
    if (lVar6 != 0) {
      if ((*(long **)(lVar6 + 0x1aa0) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1aa0), puVar7 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar7)();
        uVar4 = uVar4 ^ 1;
      }
      uVar5 = FUN_028169a0(*(long *)(lVar6 + 0x1a88) + *(long *)(lVar6 + 0x1a80));
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x1aa0) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1aa0) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      if (uVar5 < 0x28) {
        uVar8 = FUN_02677ea0(param_1,uVar5);
        FUN_02326130(param_1,uVar8,1);
      }
    }
  }
  return;
}

