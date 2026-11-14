
void FUN_01bebe38(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_1130;
  undefined1 *puStack_1128;
  undefined4 local_1120;
  undefined1 local_111c;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined4 local_1108;
  undefined *local_1100;
  undefined1 *puStack_10f8;
  undefined4 local_10f0;
  undefined1 local_10ec [63];
  undefined1 local_10ad;
  undefined *local_10a8;
  undefined1 *puStack_10a0;
  undefined4 local_1098;
  undefined1 local_1094 [63];
  undefined1 local_1055;
  undefined1 auStack_1050 [2];
  undefined1 auStack_104e [4094];
  
  puVar5 = PTR_DAT_04bb2698;
  puVar1 = param_1 + 0x18;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar8 = malloc(0x1000);
joined_r0x01bebff4:
    if (pvVar8 != (void *)0x0) {
      param_1[0x34] = pvVar8;
      param_1[0x19] = pvVar8;
      *(undefined4 *)(param_1 + 0x1a) = 0x800;
      (**(code **)(param_1[0x18] + 0x38))(puVar1);
    }
  }
  else {
    plVar7 = DAT_0533a098;
    if (DAT_0533a098 != (long *)0x0) {
LAB_01bebeac:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1000,8);
      goto joined_r0x01bebff4;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01bebeac;
  }
  if (param_1[0x19] == 0) {
    *(undefined1 *)((long)param_1 + 0x1c1) = 0;
  }
  else if (*(char *)((long)param_1 + 0x1c1) != '\0') {
    uVar9 = FUN_006f50a0(puVar1,param_1 + 2,param_1 + 0xd,0);
    if ((uVar9 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x1c1) = 0;
      lVar10 = param_1[0x34];
      goto joined_r0x01bec004;
    }
    if ((*(char *)((long)param_1 + 0x1c1) != '\0') &&
       (FUN_01bec0c8(param_1), *(char *)((long)param_1 + 0x1c1) != '\0')) {
      local_111c = 0;
      local_1120 = 0x800;
      local_1118 = 0xffffffff;
      uStack_1110 = 0xffffffff00000000;
      uVar3 = *param_1;
      uVar4 = param_1[1];
      local_1108 = 0xffffffff;
      puStack_10f8 = local_10ec;
      local_10f0 = 0x40;
      local_10ad = 0;
      local_10ec[0] = 0;
      local_1100 = PTR_DAT_04bb2bc0 + 0x10;
      local_1098 = 0x40;
      local_1055 = 0;
      local_1094[0] = 0;
      puStack_10a0 = local_1094;
      local_1130 = &DAT_04a3d380;
      puStack_1128 = auStack_1050;
      local_10a8 = local_1100;
      memset(auStack_1050,0,0x1000);
      puVar2 = auStack_104e + 0xffe;
      if (auStack_104e + 0xffe <= auStack_104e) {
        puVar2 = auStack_104e;
      }
      memset(auStack_1050,0,(size_t)(puVar2 + (-0xe0 - (long)&local_1130)));
      FUN_01c08808(uVar3,&local_1130,uVar4);
      lVar10 = param_1[0x34];
      goto joined_r0x01bec004;
    }
  }
  lVar10 = param_1[0x34];
joined_r0x01bec004:
  if (lVar10 != 0) {
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    (**(code **)(param_1[0x18] + 0x38))(puVar1);
    pvVar8 = (void *)param_1[0x34];
    if (pvVar8 != (void *)0x0) {
      if (*(long *)puVar5 == 0) {
        free(pvVar8);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
        }
      }
    }
    param_1[0x34] = 0;
  }
  if (*(char *)((long)param_1 + 0x1b4) != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0x36);
  }
  if (*(char *)((long)param_1 + 0x1c1) == '\0') {
    (**(code **)(*(long *)*param_1 + 0x38))();
  }
  return;
}

