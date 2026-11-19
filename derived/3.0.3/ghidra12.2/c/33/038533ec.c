
undefined8 FUN_038533ec(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (param_2 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_2 = (long *)*puVar1;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0);
  puVar2 = PTR_DAT_04bb2698;
  uVar7 = 0;
  if (lVar4 != 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      plVar6 = malloc(0xe8);
    }
    else {
      plVar6 = param_2;
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar8 + 8);
        if (lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*puVar1;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xe8,8);
    }
    *(undefined4 *)(plVar6 + 2) = 0;
    puVar3 = PTR_DAT_04bcb430;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    plVar6[5] = 0;
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[9] = 0;
    *(undefined4 *)(plVar6 + 10) = 0;
    plVar6[0xb] = 0;
    *(undefined4 *)(plVar6 + 0xc) = 0;
    plVar6[0xd] = 0;
    *(undefined4 *)(plVar6 + 0xe) = 0;
    plVar6[0xf] = 0;
    *(undefined4 *)(plVar6 + 0x10) = 0;
    plVar6[0x11] = 0;
    *(undefined4 *)(plVar6 + 0x12) = 0;
    plVar6[0x13] = 0;
    *(undefined4 *)(plVar6 + 0x14) = 0;
    plVar6[0x15] = 0;
    plVar6[0x1a] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)&DAT_0407ebb1;
    local_68 = 0;
    local_a0 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    plVar6[0x1b] = 0;
    plVar6[0x1c] = 0;
    local_a8 = param_2;
    local_98 = lVar4;
    (**(code **)(*plVar6 + 0x248))(plVar6,&local_a8);
    param_1[1] = (long)plVar6;
    param_1[5] = lVar4;
    *(int *)(param_1 + 9) = (int)param_1[9] + 1;
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
    uVar7 = 0;
    if (lVar4 != 0) {
      lVar8 = *(long *)puVar2;
      if (lVar8 == 0) {
        plVar6 = malloc(0xe8);
      }
      else {
        plVar6 = param_2;
        if (param_2 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar1 = (undefined8 *)(lVar8 + 8);
          if (lVar5 != 0) {
            puVar1 = (undefined8 *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*puVar1;
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xe8,8);
      }
      *(undefined4 *)(plVar6 + 2) = 0;
      *plVar6 = (long)(puVar3 + 0x10);
      plVar6[1] = (long)&DAT_0407ebb1;
      plVar6[3] = 0;
      *(undefined4 *)(plVar6 + 4) = 0;
      plVar6[5] = 0;
      *(undefined4 *)(plVar6 + 6) = 0;
      plVar6[7] = 0;
      *(undefined4 *)(plVar6 + 8) = 0;
      local_a0 = 0;
      local_68 = 0;
      plVar6[9] = 0;
      *(undefined4 *)(plVar6 + 10) = 0;
      plVar6[0xb] = 0;
      *(undefined4 *)(plVar6 + 0xc) = 0;
      plVar6[0xd] = 0;
      *(undefined4 *)(plVar6 + 0xe) = 0;
      plVar6[0xf] = 0;
      *(undefined4 *)(plVar6 + 0x10) = 0;
      plVar6[0x11] = 0;
      *(undefined4 *)(plVar6 + 0x12) = 0;
      plVar6[0x13] = 0;
      *(undefined4 *)(plVar6 + 0x14) = 0;
      plVar6[0x15] = 0;
      plVar6[0x1a] = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      plVar6[0x1b] = 0;
      plVar6[0x1c] = 0;
      local_a8 = param_2;
      local_98 = lVar4;
      (**(code **)(*plVar6 + 0x248))(plVar6,&local_a8);
      param_1[2] = (long)plVar6;
      param_1[6] = lVar4;
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1,2);
      uVar7 = 0;
      if (lVar4 != 0) {
        lVar8 = *(long *)puVar2;
        if (lVar8 == 0) {
          plVar6 = malloc(0xe8);
        }
        else {
          plVar6 = param_2;
          if (param_2 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            puVar1 = (undefined8 *)(lVar8 + 8);
            if (lVar5 != 0) {
              puVar1 = (undefined8 *)(lVar5 + 0xa8);
            }
            plVar6 = (long *)*puVar1;
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xe8,8);
        }
        *(undefined4 *)(plVar6 + 2) = 0;
        *plVar6 = (long)(puVar3 + 0x10);
        plVar6[1] = (long)&DAT_0407ebb1;
        plVar6[3] = 0;
        *(undefined4 *)(plVar6 + 4) = 0;
        plVar6[5] = 0;
        *(undefined4 *)(plVar6 + 6) = 0;
        plVar6[7] = 0;
        *(undefined4 *)(plVar6 + 8) = 0;
        local_a0 = 0;
        local_68 = 0;
        plVar6[9] = 0;
        *(undefined4 *)(plVar6 + 10) = 0;
        plVar6[0xb] = 0;
        *(undefined4 *)(plVar6 + 0xc) = 0;
        plVar6[0xd] = 0;
        *(undefined4 *)(plVar6 + 0xe) = 0;
        plVar6[0xf] = 0;
        *(undefined4 *)(plVar6 + 0x10) = 0;
        plVar6[0x11] = 0;
        *(undefined4 *)(plVar6 + 0x12) = 0;
        plVar6[0x13] = 0;
        *(undefined4 *)(plVar6 + 0x14) = 0;
        plVar6[0x15] = 0;
        plVar6[0x1a] = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        plVar6[0x1b] = 0;
        plVar6[0x1c] = 0;
        local_a8 = param_2;
        local_98 = lVar4;
        (**(code **)(*plVar6 + 0x248))(plVar6,&local_a8);
        param_1[3] = (long)plVar6;
        param_1[7] = lVar4;
        *(int *)(param_1 + 9) = (int)param_1[9] + 1;
        lVar4 = (**(code **)(*param_1 + 0x10))(param_1,3);
        uVar7 = 0;
        if (lVar4 != 0) {
          lVar8 = *(long *)puVar2;
          if (lVar8 == 0) {
            plVar6 = malloc(0xe8);
          }
          else {
            plVar6 = param_2;
            if (param_2 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              puVar1 = (undefined8 *)(lVar8 + 8);
              if (lVar5 != 0) {
                puVar1 = (undefined8 *)(lVar5 + 0xa8);
              }
              plVar6 = (long *)*puVar1;
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xe8,8);
          }
          *(undefined4 *)(plVar6 + 2) = 0;
          *plVar6 = (long)(puVar3 + 0x10);
          plVar6[1] = (long)&DAT_0407ebb1;
          plVar6[3] = 0;
          *(undefined4 *)(plVar6 + 4) = 0;
          plVar6[5] = 0;
          *(undefined4 *)(plVar6 + 6) = 0;
          plVar6[7] = 0;
          *(undefined4 *)(plVar6 + 8) = 0;
          local_a0 = 0;
          local_68 = 0;
          plVar6[9] = 0;
          *(undefined4 *)(plVar6 + 10) = 0;
          plVar6[0xb] = 0;
          *(undefined4 *)(plVar6 + 0xc) = 0;
          plVar6[0xd] = 0;
          *(undefined4 *)(plVar6 + 0xe) = 0;
          plVar6[0xf] = 0;
          *(undefined4 *)(plVar6 + 0x10) = 0;
          plVar6[0x11] = 0;
          *(undefined4 *)(plVar6 + 0x12) = 0;
          plVar6[0x13] = 0;
          *(undefined4 *)(plVar6 + 0x14) = 0;
          plVar6[0x15] = 0;
          plVar6[0x1a] = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          plVar6[0x1b] = 0;
          plVar6[0x1c] = 0;
          local_a8 = param_2;
          local_98 = lVar4;
          (**(code **)(*plVar6 + 0x248))(plVar6,&local_a8);
          uVar7 = 1;
          param_1[4] = (long)plVar6;
          param_1[8] = lVar4;
          *(int *)(param_1 + 9) = (int)param_1[9] + 1;
        }
      }
    }
  }
  return uVar7;
}

