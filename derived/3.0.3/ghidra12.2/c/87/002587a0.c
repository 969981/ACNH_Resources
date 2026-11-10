
void FUN_002587a0(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 auStack_b8 [40];
  undefined *local_90;
  undefined4 local_88 [10];
  undefined1 auStack_60 [16];
  
  uVar7 = (**(code **)(*(long *)param_1[0x62] + 0x70))();
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(*(long *)param_1[0x62] + 0x78))();
    if ((uVar7 & 1) == 0) {
      uVar7 = (**(code **)(*(long *)param_1[0x62] + 0x80))();
      if (((uVar7 & 1) != 0) && (*(char *)((long)param_1 + 0x173c) == '\0')) {
        uVar9 = (**(code **)(*(long *)param_1[0x62] + 0xa0))();
        local_88[0] = 0;
        local_90 = (undefined *)0x40;
        FUN_00220138(uVar9,&local_90);
        plVar1 = param_1 + 0x55;
        local_88[0] = 0;
        local_90 = (undefined *)0x40;
        FUN_00220138(plVar1,&local_90);
        plVar3 = param_1 + 0x59;
        local_88[0] = 0;
        local_90 = (undefined *)0x40;
        FUN_00220138(plVar3,&local_90);
        local_88[0] = 0;
        local_90 = (undefined1 *)0x40;
        (**(code **)(*param_1 + 0x10))(param_1,&local_90);
        *(undefined4 *)(param_1[0x82] + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0x8e) = 0;
        uVar4 = (**(code **)(*(long *)param_1[0x62] + 0x88))();
        uVar4 = (**(code **)(*param_1 + 0x250))(param_1,uVar4);
        if ((int)param_1[0x90] == 0) {
          *(undefined4 *)(param_1 + 0x90) = uVar4;
          iVar11 = (int)param_1[0x84];
        }
        else {
          iVar11 = (int)param_1[0x84];
        }
        if (iVar11 == 0) {
          uVar7 = FUN_0021fea0(plVar3);
          if ((((uVar7 & 1) != 0) && (uVar7 = FUN_0021fea0(plVar1), (uVar7 & 1) != 0)) &&
             (uVar7 = FUN_002200e4(plVar1,plVar3), (uVar7 & 1) == 0)) {
            uVar4 = (**(code **)(*(long *)param_1[0x62] + 0x88))();
            uVar7 = (**(code **)(*param_1 + 600))(param_1,uVar4);
            if (((uVar7 & 1) != 0) && (*(char *)((long)param_1 + 0x48c) == '\0')) {
              FUN_00258ed0(&local_90,param_1);
            }
          }
          iVar11 = (int)param_1[0x84];
        }
        if (iVar11 != 2) {
          *(undefined4 *)(param_1 + 0xb) = 0;
        }
        FUN_0021fef8(plVar1);
        FUN_0021fef8(plVar3);
        *(undefined1 *)((long)param_1 + 0xe4) = 0;
        *(undefined1 *)((long)param_1 + 0x124) = 0;
        *(undefined1 *)((long)param_1 + 0x164) = 0;
        *(undefined1 *)((long)param_1 + 0x1a4) = 0;
        *(undefined1 *)((long)param_1 + 0x1e4) = 0;
        *(undefined1 *)((long)param_1 + 0x224) = 0;
        *(undefined1 *)((long)param_1 + 0x264) = 0;
        *(undefined1 *)((long)param_1 + 0x2a4) = 0;
      }
    }
    else {
      uVar9 = (**(code **)(*(long *)param_1[0x62] + 0xa0))();
      local_88[0] = 0;
      local_90 = (undefined *)0x40;
      FUN_00220138(uVar9,&local_90);
      plVar1 = param_1 + 0x55;
      local_88[0] = 0;
      local_90 = (undefined *)0x40;
      FUN_00220138(plVar1,&local_90);
      local_88[0] = 0;
      local_90 = (undefined *)0x40;
      FUN_00220138(param_1 + 0x59,&local_90);
      local_88[0] = 0;
      local_90 = (undefined1 *)0x40;
      (**(code **)(*param_1 + 0x10))(param_1,&local_90);
      uVar9 = (**(code **)(*(long *)param_1[0x62] + 0xa0))();
      uVar7 = FUN_002200e4(uVar9,plVar1);
      if ((uVar7 & 1) == 0) {
        local_88[0] = 0;
        local_90 = (undefined *)0x40;
        FUN_00220138(plVar1,&local_90);
        uVar9 = (**(code **)(*(long *)param_1[0x62] + 0xa0))();
        local_88[0] = 0;
        local_90 = (undefined *)0x40;
        FUN_00220138(uVar9,&local_90);
        uVar9 = (**(code **)(*(long *)param_1[0x62] + 0xa0))();
        local_88[0] = 0;
        local_90 = (undefined *)0x10;
        FUN_00220138(plVar1,&local_90);
        local_88[0] = 0;
        local_90 = &DAT_00000010;
        FUN_00220138(uVar9,&local_90);
        FUN_0021f54c(plVar1,uVar9);
      }
      iVar11 = 0;
      uVar12 = 0;
      puVar2 = PTR_DAT_04bcd580 + 0x10;
      do {
        uVar7 = (**(code **)(*(long *)param_1[99] + 0x20))((long *)param_1[99],iVar11);
        if (((uVar7 & 1) == 0) &&
           (uVar7 = (**(code **)(*(long *)param_1[0x62] + 0x20))((long *)param_1[0x62],iVar11),
           (uVar7 & 1) != 0)) {
          pcVar10 = *(code **)(*param_1 + 0x1b0);
LAB_002589e8:
          uVar5 = (*pcVar10)(param_1,iVar11);
          uVar12 = uVar5 | uVar12;
        }
        else {
          uVar7 = (**(code **)(*(long *)param_1[99] + 0x20))((long *)param_1[99],iVar11);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = (**(code **)(*(long *)param_1[0x62] + 0x20))((long *)param_1[0x62],iVar11),
             (uVar7 & 1) == 0)) {
            pcVar10 = *(code **)(*param_1 + 0x1b8);
            goto LAB_002589e8;
          }
          uVar7 = (**(code **)(*(long *)param_1[99] + 0x20))((long *)param_1[99],iVar11);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = (**(code **)(*(long *)param_1[0x62] + 0x20))((long *)param_1[0x62],iVar11),
             (uVar7 & 1) != 0)) {
            FUN_0024e09c(&local_90);
            (**(code **)(*(long *)param_1[99] + 0x28))((long *)param_1[99],iVar11,&local_90);
            FUN_0024e09c(&local_c0);
            (**(code **)(*(long *)param_1[0x62] + 0x28))((long *)param_1[0x62],iVar11,&local_c0);
            uVar7 = FUN_0024e288(&local_90,&local_c0);
            if ((uVar7 & 1) == 0) {
              local_c4 = 0;
              local_cc = 0x40;
              FUN_00220138(local_88,&local_cc);
              local_c4 = 0;
              local_cc = 0x40;
              FUN_00220138(auStack_b8,&local_cc);
              uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,iVar11);
              uVar6 = (**(code **)(*param_1 + 0x1b0))(param_1,iVar11);
              uVar12 = uVar5 | uVar6 | uVar12;
            }
            local_c0 = puVar2;
            FUN_0021f584(auStack_b8);
            local_90 = puVar2;
            FUN_0021f584(local_88);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 8);
      uVar5 = (**(code **)(*(long *)param_1[0x62] + 0x38))();
      if (((uVar5 & uVar12 & 1) != 0) &&
         (((int)param_1[0x84] != 1 || ((char)param_1[0x8e] != '\0')))) {
        FUN_00258d78(param_1);
      }
    }
    (**(code **)(*param_1 + 0x60))(param_1,param_1[99],param_1[0x62]);
    local_88[0] = 0;
    local_90 = (undefined *)0x40;
    (**(code **)(*param_1 + 0x10))(param_1,&local_90);
  }
  else {
    uVar4 = (**(code **)(*(long *)param_1[0x62] + 0x88))();
    uVar4 = (**(code **)(*param_1 + 0x250))(param_1,uVar4);
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    FUN_0021fef8(param_1 + 0x55);
    FUN_0021fef8(param_1 + 0x59);
    (**(code **)(*(long *)param_1[0x62] + 0xa8))(&local_90);
    if ((int)local_90 != 0) {
      (**(code **)(*(long *)param_1[0x62] + 0xa8))(&local_90);
      FUN_00229780((long)param_1 + 0x172c,&local_90);
      FUN_002296c4(auStack_60,(long)param_1 + 0x172c);
      uVar7 = (**(code **)(*param_1 + 0x260))(param_1,auStack_60);
      if (((uVar7 & 1) != 0) &&
         (lVar8 = FUN_0026c850(DAT_04c603c8), *(char *)(lVar8 + 0x84) != '\0')) {
        *(undefined4 *)((long)param_1 + 0x424) = 4;
      }
    }
  }
  return;
}

