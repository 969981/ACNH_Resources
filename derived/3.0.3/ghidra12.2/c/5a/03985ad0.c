
void FUN_03985ad0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  bool bVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_f8;
  char *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined7 local_b8;
  undefined1 uStack_b1;
  undefined6 uStack_b0;
  byte local_aa;
  undefined1 uStack_a9;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 local_70;
  undefined1 uStack_69;
  char *local_68;
  uint local_60;
  int local_58;
  int iStack_54;
  long local_50;
  long lStack_48;
  
  *(undefined8 *)(param_1 + 0x50) = param_2;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x88);
  }
  else {
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x88,8);
    param_2 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_006cd430(pvVar9,param_2);
  *(void **)(param_1 + 0x48) = pvVar9;
  if (*(long *)(param_1 + 0x60) != 0) {
    local_f8 = PTR_DAT_04bb2020 + 0x10;
    local_f0 = "arrow.raw";
    lVar11 = (**(code **)(**(long **)(param_1 + 0x50) + 0x30))
                       (*(long **)(param_1 + 0x50),&local_f8,0);
    if (lVar11 != 0) {
      local_a8[0] = -1;
      local_60 = 0x10000;
      local_70 = 0;
      uStack_69 = 0;
      local_68 = "Cursour(agl debug)";
      local_b8 = 0;
      uStack_b1 = 0;
      uStack_b0 = 0;
      local_aa = 0;
      uStack_a9 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = (undefined *)0x0;
      local_f0 = (char *)0x0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      uStack_71 = 0;
      FUN_0390a734(&local_f8,1,0x1d,0x20,0x20,1,1,0,0,1);
      local_f0 = *(char **)(param_1 + 0x88);
      local_e8 = param_1 + 0x70;
      local_58 = 0;
      if (*(long *)(param_1 + 0x90) != 0) {
        local_58 = *(int *)(param_1 + 0x78) - *(int *)(*(long *)(param_1 + 0x90) + 0x10);
      }
      if (local_f0 == (char *)0x0) {
        iStack_54 = 0;
      }
      else {
        iStack_54 = *(int *)((long)local_f0 + 0x104);
      }
      if ((local_aa >> 1 & 1) == 0) {
        bVar10 = false;
      }
      else {
        bVar10 = 0x11 < (local_60 & 0xffff) && (local_60 & 0xffff) - 0x59 < 0xffffffd6;
      }
      local_50 = (long)local_f0;
      lStack_48 = local_e8;
      local_f8._0_4_ = local_58;
      local_f8._4_4_ = iStack_54;
      FUN_038fd3e0(local_a8,&local_58,&local_c8,0,local_68,bVar10,1);
      puVar5 = PTR_DAT_04bc1010;
      FUN_038faf2c(*(undefined8 *)PTR_DAT_04bc1010,&local_f8,lVar11,0);
      piVar12 = *(int **)(param_1 + 0x60);
      FUN_0390cee0(piVar12);
      *(int **)(param_1 + 0x68) = piVar12;
      *piVar12 = (int)local_f8;
      piVar12[1] = local_f8._4_4_;
      *(char **)(piVar12 + 2) = local_f0;
      *(long *)(piVar12 + 4) = local_e8;
      piVar12[6] = (int)local_e0;
      piVar12[7] = local_e0._4_4_;
      *(undefined8 *)(piVar12 + 8) = local_d8;
      *(undefined8 *)(piVar12 + 10) = local_d0;
      *(ulong *)((long)piVar12 + 0x47) = CONCAT17(local_aa,CONCAT61(uStack_b0,uStack_b1));
      *(undefined8 *)(piVar12 + 0xc) = local_c8;
      *(undefined8 *)(piVar12 + 0xe) = uStack_c0;
      *(ulong *)(piVar12 + 0x10) = CONCAT17(uStack_b1,local_b8);
      FUN_038fd1e0(piVar12 + 0x14);
      piVar12[0x14] = local_a8[0];
      piVar12[0x16] = (int)local_a0;
      piVar12[0x17] = local_a0._4_4_;
      *(undefined8 *)(piVar12 + 0x18) = local_98;
      *(undefined8 *)(piVar12 + 0x1a) = local_90;
      *(ulong *)((long)piVar12 + 0x87) = CONCAT71(local_70,uStack_71);
      *(undefined8 *)(piVar12 + 0x1c) = local_88;
      *(undefined8 *)(piVar12 + 0x1e) = local_80;
      *(ulong *)(piVar12 + 0x20) = CONCAT17(uStack_71,uStack_78);
      if (local_a8[0] != -1) {
        lVar11 = *(long *)puVar5;
        uVar4 = local_a8[0] - (uint)*(ushort *)(lVar11 + 0x3da);
        if (*(uint *)(lVar11 + 0x368) <= uVar4) {
          uVar4 = 0;
        }
        piVar2 = (int *)(*(long *)(lVar11 + 0x370) + (long)(int)uVar4 * 0x20);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          do {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          local_58 = piVar12[0x16];
          iStack_54 = piVar12[0x17];
          local_50 = *(long *)(piVar12 + 0x18);
          lStack_48 = *(long *)(piVar12 + 0x1a);
          iVar6 = FUN_038fc580(*(undefined8 *)puVar5,&local_58,piVar12 + 0x1c,0,"countup",0);
          piVar12[0x14] = iVar6;
        }
      }
      *(char **)(piVar12 + 0x24) = local_68;
      puVar1 = (uint *)(piVar12 + 0x35);
      piVar12[0x26] = local_60;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_038fd0e0(local_a8);
    }
  }
  return;
}

