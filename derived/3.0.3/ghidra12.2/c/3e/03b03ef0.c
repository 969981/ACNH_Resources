
void FUN_03b03ef0(long param_1,undefined8 param_2,long param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48;
  
  FUN_03985ad0(*(undefined8 *)PTR_DAT_04bb4e50);
  FUN_03986cb0(*(undefined8 *)PTR_DAT_04bbdd18,param_2,param_5);
  lVar5 = DAT_05ae7600;
  if (param_3 != 0) {
    if (DAT_05ae7600 == 0) {
      pvVar4 = malloc(0x88);
    }
    else {
      plVar3 = param_5;
      if (param_5 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar5 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x88,8);
    }
    FUN_006cd430(pvVar4,param_3);
    *(void **)(param_1 + 0x478) = pvVar4;
    if (DAT_05ae9af0 != 0) {
      FUN_039c8740(DAT_05ae9af0,param_3,param_5,*(undefined8 *)(param_1 + 0x360));
    }
    lVar5 = DAT_05ae9368;
    if (((DAT_05ae9368 != 0) && (*(long *)(DAT_05ae9368 + 0x10) = param_3, param_4 != 0)) &&
       (FUN_039b4628(lVar5,param_4,param_5,*(undefined8 *)(param_1 + 0x360)), lVar5 = DAT_05ae7600,
       *(char *)(param_1 + 0x439) != '\0')) {
      if (param_5 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_5 = (long *)(lVar5 + 8);
        if (lVar2 != 0) {
          param_5 = (long *)(lVar2 + 0xa8);
        }
        param_5 = (long *)*param_5;
      }
      (**(code **)(*param_5 + 0x78))(param_5);
      puVar1 = PTR_DAT_04bbd8f8;
      lVar5 = *(long *)(DAT_05ae9368 + 8);
      local_b0 = 0x400;
      local_ac = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_a0 = 0;
      local_a8 = 0x100000001;
      local_88 = 0x101;
      local_86 = 1;
      local_98 = 0x100000;
      uStack_90 = 0;
      local_60 = 0;
      local_f0 = &PTR_LAB_04b72da0;
      uStack_e8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_d0 = *(undefined4 *)(lVar5 + 0x5cd70);
      local_cc = *(undefined4 *)(lVar5 + 0x5cd90);
      local_c4 = *(undefined4 *)(lVar5 + 0x5cdb0);
      local_c8 = *(undefined4 *)(lVar5 + 0x5cdd0);
      local_c0 = *(undefined4 *)(lVar5 + 0x5cdf0);
      local_b8 = (long)(*(int *)(lVar5 + 0x5ce50) << 10);
      local_54 = *(int *)(lVar5 + 0x5ce10) << 10;
      local_50 = *(int *)(lVar5 + 0x5ce30) << 10;
      local_4c = *(int *)(lVar5 + 0x5ce70) << 10;
      local_48 = *(undefined1 *)(lVar5 + 0x5ce90);
      pvVar4 = *(void **)PTR_DAT_04bbd8f8;
      local_58 = local_c0;
      if (pvVar4 == (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          pvVar4 = malloc(0x1988);
        }
        else {
          pvVar4 = (void *)(**(code **)(*param_5 + 0x30))(param_5,0x1988,8);
        }
        FUN_038c69f0((long)pvVar4 + 0x1968,param_5,3);
        *(undefined **)((long)pvVar4 + 0x1968) = PTR_DAT_04bd19c8 + 0x10;
        DAT_05aea950 = (long)pvVar4 + 0x1968;
        FUN_03b07810(pvVar4);
        *(void **)puVar1 = pvVar4;
      }
      FUN_03b07cf0(pvVar4,&local_f0,param_5,*(undefined8 *)(param_1 + 0x360));
    }
  }
  return;
}

