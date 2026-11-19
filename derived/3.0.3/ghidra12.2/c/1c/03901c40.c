
void FUN_03901c40(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long local_178 [16];
  long local_f8 [8];
  long *local_b8;
  undefined8 local_b0 [10];
  
  puVar5 = PTR_DAT_04bb29d0;
  local_b0[7] = 0;
  local_b0[8] = 0;
  local_b0[6] = 0;
  uVar15 = 0;
  iVar10 = 0;
  uVar13 = 0;
  *(long *)(param_2 + 0xf0) = param_1;
  lVar8 = *(long *)puVar5;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_f8[0] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_f8[7] = 0;
  local_b8 = (long *)0x0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  do {
    plVar11 = *(long **)(param_1 + 0x20 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
    if (plVar11 != (long *)0x0) {
      lVar14 = (long)(int)uVar13;
      puVar1 = (uint *)(plVar11 + 0x17);
      lVar9 = *(long *)PTR_DAT_04bc1010;
      uVar6 = (int)plVar11[0xb] - (uint)*(ushort *)(lVar9 + 0x3da);
      if (*(uint *)(lVar9 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      local_b0[lVar14] = *(undefined8 *)(*(long *)(lVar9 + 0x370) + (long)(int)uVar6 * 0x20 + 0x18);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 | 0x80000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x7fffffff) != 0) {
        if ((int)uVar6 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar8 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_f8[lVar14] = (long)(plVar11 + 0x15);
      if (((param_3 & 0xffff) >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0) {
        plVar2 = local_178 + lVar14 * 2;
        lVar9 = plVar11[0x16];
        *plVar2 = plVar11[0x15];
        local_178[lVar14 * 2 + 1] = lVar9;
        if ((short)plVar11[0x14] == 0x1d) {
          (**(code **)PTR_DAT_04bcf820)(plVar2,0x38);
        }
        local_f8[lVar14] = (long)plVar2;
      }
      iVar10 = (uint)uVar15 + 1;
    }
    puVar5 = PTR_DAT_04bc1010;
    uVar15 = uVar13 + 1;
    uVar13 = uVar15 & 0xffffffff;
  } while ((int)uVar15 != 8);
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 == (long *)0x0) {
    uVar12 = local_b0[8];
  }
  else {
    puVar1 = (uint *)(plVar11 + 0x17);
    lVar9 = *(long *)PTR_DAT_04bc1010;
    uVar6 = (int)plVar11[0xb] - (uint)*(ushort *)(lVar9 + 0x3da);
    if (*(uint *)(lVar9 + 0x368) <= uVar6) {
      uVar6 = 0;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x370) + (long)(int)uVar6 * 0x20 + 0x18);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 | 0x80000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_b0[8] = uVar12;
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        while ((int)*puVar1 < 0) {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        }
      }
      else {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_b8 = plVar11 + 0x15;
  }
  (**(code **)PTR_DAT_04bcf1e0)
            (*(undefined8 *)(param_2 + 0xb8),iVar10,local_b0,local_f8,uVar12,local_b8);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x28);
  }
  else {
    uVar6 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,0);
    lVar8 = *(long *)(param_1 + 0x28);
  }
  if (lVar8 != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,1);
    uVar6 = uVar6 | uVar7;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,2);
    uVar6 = uVar6 | uVar7;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,3);
    uVar6 = uVar6 | uVar7;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,4);
    uVar6 = uVar6 | uVar7;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,5);
    uVar6 = uVar7 | uVar6;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,6);
    uVar6 = uVar7 | uVar6;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar7 = FUN_038fb3a0(*(undefined8 *)puVar5,param_2,7);
    uVar6 = uVar7 | uVar6;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar7 = FUN_038fb5d0(*(undefined8 *)puVar5,param_2);
    uVar6 = uVar7 | uVar6;
  }
  if (((uVar6 & 1) != 0) && ((*(uint *)(*(long *)puVar5 + 0x5c8) & 0x300000) == 0x100000)) {
    (**(code **)PTR_DAT_04bcfe30)(*(undefined8 *)(param_2 + 0xb8),1);
  }
  return;
}

