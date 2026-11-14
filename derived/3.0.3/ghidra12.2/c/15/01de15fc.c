
bool FUN_01de15fc(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  void *__dest;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char local_64 [4];
  undefined1 auStack_44 [4];
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (((param_3 & 1) != 0) && (*(int *)(DAT_05358908 + 0x78) == 0)) {
    return false;
  }
  uVar5 = FUN_01de19b0(param_1,local_64,param_2);
  if ((uVar5 & 1) == 0) {
    *(char *)(param_1 + 0x11) = local_64[0];
    return local_64[0] != '\0';
  }
  if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
    return false;
  }
  lVar11 = *(long *)(DAT_0538adc8 + 0x2a8);
  uVar5 = FUN_01d77c78(lVar11);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  uVar5 = FUN_01d77c78(lVar11);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if (*(char *)(lVar11 + 0xc) != '\0') {
    return false;
  }
  bVar3 = FUN_01e06398(DAT_0538adc8,lVar11 + 0xd,lVar11);
  *(byte *)(lVar11 + 0xc) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    return false;
  }
  lVar10 = *(long *)(DAT_0538adc8 + 0x6c8);
  if (lVar10 == 0) {
    return false;
  }
  __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                             ((long *)*param_1,*(undefined8 *)(param_2 + 4),0xfffffff8);
  if (__dest == (void *)0x0) {
    return false;
  }
  memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 4));
  lVar13 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar8 = malloc(0x4f0);
  }
  else {
    plVar6 = (long *)param_1[1];
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar13 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      puVar8 = (undefined4 *)0x0;
      if (plVar6 == (long *)0x0) goto LAB_01de1758;
    }
    puVar8 = (undefined4 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x4f0,8);
  }
LAB_01de1758:
  puVar8[1] = 7;
  puVar8[6] = 0x4b1;
  *(undefined1 *)(puVar8 + 7) = 0;
  puVar1 = PTR_DAT_04bb2b70;
  *(undefined1 *)(puVar8 + 0x133) = 0;
  *(undefined8 *)(puVar8 + 0x134) = 0;
  *(undefined8 *)(puVar8 + 0x136) = 0;
  *(undefined8 *)(puVar8 + 0x138) = 0;
  *(undefined8 *)(puVar8 + 0x13a) = 0;
  *(undefined **)(puVar8 + 2) = puVar1 + 0x10;
  *(undefined4 **)(puVar8 + 4) = puVar8 + 7;
  param_1[0xb] = puVar8;
  *puVar8 = 0xc;
  *(undefined4 *)(param_1[0xb] + 4) = *param_2;
  *(void **)(param_1[0xb] + 0x4d0) = __dest;
  *(undefined8 *)(param_1[0xb] + 0x4d8) = *(undefined8 *)(param_2 + 4);
  lVar13 = param_1[0xb];
  (**(code **)(*(long *)(lVar13 + 8) + 0x18))();
  uVar12 = *(undefined8 *)(lVar13 + 0x10);
  uVar2 = *(undefined4 *)(lVar13 + 0x18);
  (**(code **)(*(long *)(param_2 + 6) + 0x18))(param_2 + 6);
  iVar4 = FUN_038d4f60(auStack_44,uVar12,uVar2,*(undefined8 *)(param_2 + 8),0xffffffff);
  if (iVar4 != 0) {
    **(undefined1 **)(lVar13 + 0x10) = 0;
  }
  lVar13 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x130);
  }
  else {
    plVar6 = (long *)param_1[1];
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar13 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x130,8);
  }
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 1) = 0xc;
  *(undefined4 *)(plVar6 + 6) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  puVar1 = PTR_DAT_04bb2b50 + 0x10;
  *(undefined1 *)((long)plVar6 + 0xb4) = 0;
  *plVar6 = (long)puVar1;
  *(undefined4 *)(plVar6 + 10) = 0x61;
  *(undefined1 *)((long)plVar6 + 0x54) = 0;
  plVar6[9] = (long)plVar6 + 0x54;
  *(undefined4 *)(plVar6 + 0x19) = 0x61;
  *(undefined1 *)((long)plVar6 + 300) = 0;
  *(undefined1 *)((long)plVar6 + 0xcc) = 0;
  plVar6[7] = 0;
  plVar6[8] = (long)&PTR_LAB_048fb7d8;
  plVar6[0x17] = (long)&PTR_LAB_048fb7d8;
  plVar6[0x18] = (long)plVar6 + 0xcc;
  *(long **)(param_1[0xb] + 0x4e0) = plVar6;
  uVar5 = FUN_01d7a428(lVar11,plVar6);
  if ((uVar5 & 1) == 0) {
    FUN_01de1ccc(param_1);
    return false;
  }
  puVar9 = (undefined8 *)FUN_038aa4a0(0xc0,param_1[1],8);
  *(undefined4 *)(puVar9 + 4) = 0x40;
  *(undefined1 *)((long)puVar9 + 0x24) = 0;
  *(undefined1 *)((long)puVar9 + 0x7c) = 0;
  *(undefined1 *)((long)puVar9 + 99) = 0;
  *(undefined4 *)(puVar9 + 0xf) = 0x40;
  *(undefined1 *)((long)puVar9 + 0xbb) = 0;
  puVar9[2] = &PTR_LAB_048fb9f8;
  puVar9[3] = (undefined1 *)((long)puVar9 + 0x24);
  puVar9[0xd] = &PTR_LAB_048fb9f8;
  puVar9[0xe] = (undefined1 *)((long)puVar9 + 0x7c);
  *puVar9 = &PTR_LAB_048fb9a8;
  puVar9[1] = 0x90000000c;
  *(undefined8 **)(param_1[0xb] + 0x4e8) = puVar9;
  FUN_01ddd380(puVar9,lVar10);
  if ((param_3 & 1) == 0) {
    FUN_03ebb160(param_1 + 2,1);
    return true;
  }
  FUN_01ddd784(param_1);
  return true;
}

