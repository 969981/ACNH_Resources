
undefined8 * FUN_0166b1b0(undefined8 param_1,undefined8 *param_2,uint param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 *puStack_68;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar5 = malloc(0x158);
  }
  else {
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_0166b244;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x158,8);
  }
LAB_0166b244:
  *puVar5 = &PTR_LAB_049ba848;
  FUN_0390e944(puVar5 + 1);
  *puVar5 = &PTR_LAB_049ba8c8;
  puVar5[0x25] = 0;
  puVar5[0x26] = 0;
  lVar9 = *(long *)puVar2;
  puVar5[0x27] = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  uVar8 = *param_2;
  *(undefined4 *)(puVar5 + 0x26) = *(undefined4 *)(param_2 + 1);
  puVar5[0x25] = uVar8;
  if (lVar9 == 0) {
    puVar6 = malloc(0x38);
  }
  else {
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar6 = (undefined8 *)0x0;
        goto LAB_0166b2e8;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
  }
LAB_0166b2e8:
  bVar7 = 0;
  puVar6[6] = 0;
  piVar10 = (int *)(puVar6 + 1);
  piVar10[0] = 0;
  piVar10[1] = 0;
  *(undefined2 *)((long)puVar6 + 0x2a) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_LAB_049ba908;
  if (param_4 == (long *)0x0) {
    lVar3 = *(long *)puVar2;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_4 = (long *)(lVar3 + 8);
    if (lVar9 != 0) {
      param_4 = (long *)(lVar9 + 0xa8);
    }
    param_4 = (long *)*param_4;
    bVar7 = *(byte *)(puVar6 + 5) & 0xfe;
  }
  puVar6[6] = 0;
  *(byte *)(puVar6 + 5) = bVar7;
  *(undefined2 *)((long)puVar6 + 0x2a) = 0;
  piVar10[0] = 0;
  piVar10[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  if (param_3 == 0) {
    local_78 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,puVar6,param_4,(ulong)param_3 << 4,0x20,0);
    lVar9 = puVar6[3];
    *(undefined2 *)((long)puVar6 + 0x2a) = 0;
    local_78 = 0;
    if (puVar6[4] != 0) {
      local_78 = *piVar10 - *(int *)(puVar6[4] + 0x10);
    }
    if (lVar9 != 0) {
      uVar1 = *(undefined4 *)(lVar9 + 0x104);
      *(uint *)(puVar5 + 0x28) = local_78;
      puVar5[0x29] = lVar9;
      puVar5[0x2a] = puVar6;
      *(undefined4 *)((long)puVar5 + 0x144) = uVar1;
      lVar9 = (**(code **)PTR_DAT_04bb2cd8)();
      local_78 = *(uint *)(puVar5 + 0x28);
      uStack_74 = *(undefined4 *)((long)puVar5 + 0x144);
      local_70 = puVar5[0x29];
      puVar6 = (undefined8 *)puVar5[0x2a];
      goto LAB_0166b3f4;
    }
  }
  local_70 = 0;
  uStack_74 = 0;
  *(uint *)(puVar5 + 0x28) = local_78;
  lVar9 = 0;
  *(undefined4 *)((long)puVar5 + 0x144) = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = puVar6;
LAB_0166b3f4:
  puVar5[0x27] = lVar9 + (ulong)local_78;
  puStack_68 = puVar6;
  FUN_0390ebc0(puVar5 + 1,&local_78,0x10,(ulong)param_3 << 4);
  uVar1 = *(undefined4 *)((long)param_2 + 4);
  *(uint *)((long)puVar5 + 0x134) = param_3;
  *(undefined2 *)(puVar5 + 9) = 1;
  *(undefined4 *)(puVar5 + 8) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x44) = 0;
  return puVar5;
}

