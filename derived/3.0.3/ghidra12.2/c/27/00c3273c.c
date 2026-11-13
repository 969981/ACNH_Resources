
void FUN_00c3273c(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  undefined1 auStack_44 [4];
  long local_40;
  char *local_38;
  
  *param_1 = (long)&PTR_LAB_049ff3a8;
  memset(param_1 + 1,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar2;
  *(uint *)(param_1 + 0xed) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  pvVar4 = (void *)FUN_01a451fc(param_1);
  memset(pvVar4,0,0x754);
  pvVar4 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  memset(pvVar4,0,0x754);
  FUN_00c31ec4(&local_40,&DAT_04e50068);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50068);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50068);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e50070);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50070);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50070);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e50078);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50078);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50078);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e50080);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50080);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50080);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e50088);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50088);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50088);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e50090);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50090);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50090);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e50098);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e50098);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e50098);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  FUN_00c31ec4(&local_40,&DAT_04e500a0);
  (**(code **)(local_40 + 0x18))(&local_40);
  (**(code **)(local_40 + 0x18))(&local_40);
  if (((local_38 != "") && (*local_38 != '\0')) &&
     (iVar3 = FUN_02757a80(auStack_44,&local_40), iVar3 != 0)) {
    FUN_0277dedc(&DAT_04e500a0);
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_0277d6c4(&DAT_04e500a0);
    if ((uVar2 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  return;
}

