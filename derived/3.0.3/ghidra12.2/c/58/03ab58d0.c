
void FUN_03ab58d0(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined2 local_104 [2];
  uint local_100;
  uint local_e8;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_74;
  
  local_80 = 0xff7fffffff7fffff;
  local_90 = PTR_DAT_04bd0f08 + 0x10;
  local_88 = 0x7f7fffff7f7fffff;
  local_78 = *(uint *)PTR_DAT_04bd0ea8;
  local_74 = 0x3f80000000000000;
  if (local_78 < 6) {
    if ((1 << (ulong)(local_78 & 0x1f) & 0x39U) == 0) {
      fVar16 = *(float *)(param_1 + 0x47c);
      fVar17 = *(float *)(param_1 + 0x478);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x478);
      fVar17 = *(float *)(param_1 + 0x47c);
    }
    fVar19 = fVar16;
    fVar7 = 0.0;
    if (fVar16 <= 0.0) {
      fVar19 = 0.0;
      fVar7 = fVar16;
    }
    fVar18 = fVar17;
    fVar16 = 0.0;
    if (fVar17 <= 0.0) {
      fVar18 = 0.0;
      fVar16 = fVar17;
    }
    local_88 = CONCAT44(fVar16,fVar7);
    local_80 = CONCAT44(fVar18,fVar19);
  }
  FUN_038e77e4(&local_90,param_2,param_1 + 0x470);
  puVar9 = PTR_DAT_04bbdc38;
  puVar8 = PTR_DAT_04bb2f48;
  if (0 < *(int *)(param_1 + 0x8a0)) {
    iVar15 = 0;
    puVar1 = (uint *)(param_1 + 0x464);
    puVar2 = (uint *)(param_1 + 0x68c);
    do {
      if (param_3 == 0) {
        FUN_038e4cec(local_104);
        local_104[0] = 0;
        local_100 = local_100 & 0xfffffffe;
        local_e8 = local_e8 & 0xfffffff0 | 1;
        FUN_038e4d90(local_104,param_2);
        *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined4 *)(param_1 + 0x460) = 0x2020202;
        *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else {
        FUN_038e4cec(local_104);
        local_104[0] = 0;
        local_100 = local_100 & 0xfffffffe;
        local_e8 = local_e8 & 0xfffffff0 | 1;
        FUN_038e4d90(local_104,param_2);
        *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined4 *)(param_1 + 0x460) = 0x3030303;
        *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*(long *)(param_1 + 0x470) + 0x38))(param_1 + 0x470,param_2);
      lVar10 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      lVar13 = 0x1260;
      if (*(uint *)(lVar10 + 0x20) < 0xf) {
        lVar13 = 0;
      }
      lVar13 = *(long *)(lVar10 + 0x28) + lVar13;
      FUN_03907810(lVar13,param_2);
      FUN_03949e90(param_2,lVar13,param_1 + 0x390,&local_90,puVar9,puVar8);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x490) + 0x58);
      if (uVar3 != 0xffffffff) {
        lVar13 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar3 - *(ushort *)(lVar13 + 0x3da);
          if (*(uint *)(lVar13 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03ab5bd0;
          uVar11 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        }
        else {
LAB_03ab5bd0:
          if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
            uVar12 = 0x112;
            uVar14 = 0x12;
          }
          else {
            uVar12 = 0x111;
            uVar14 = 0x11;
          }
          if ((*(uint *)(lVar13 + 800) & 2) != 0) {
            uVar14 = uVar12;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar14);
          uVar11 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar11;
      }
      if (param_3 == 0) {
        FUN_038e4cec(local_104);
        local_104[0] = 0;
        local_100 = local_100 & 0xfffffffe;
        local_e8 = local_e8 & 0xfffffff0 | 1;
        FUN_038e4d90(local_104,param_2);
        *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined4 *)(param_1 + 0x688) = 0x2020202;
        *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else {
        FUN_038e4cec(local_104);
        local_104[0] = 0;
        local_100 = local_100 & 0xfffffffe;
        local_e8 = local_e8 & 0xfffffff0 | 2;
        FUN_038e4d90(local_104,param_2);
        *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined4 *)(param_1 + 0x688) = 0x2020202;
        *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) | 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*(long *)(param_1 + 0x248) + 0x38))(param_1 + 0x248,param_2);
      lVar10 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      lVar13 = 0xfc0;
      if (*(uint *)(lVar10 + 0x20) < 0xd) {
        lVar13 = 0;
      }
      lVar13 = *(long *)(lVar10 + 0x28) + lVar13;
      FUN_03907810(lVar13,param_2);
      FUN_03949e90(param_2,lVar13,param_1 + 0x5b8,&local_90,puVar9,puVar8);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x268) + 0x58);
      if (uVar3 != 0xffffffff) {
        lVar13 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar3 - *(ushort *)(lVar13 + 0x3da);
          if (*(uint *)(lVar13 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03ab5de0;
          uVar11 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        }
        else {
LAB_03ab5de0:
          if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
            uVar12 = 0x112;
            uVar14 = 0x12;
          }
          else {
            uVar12 = 0x111;
            uVar14 = 0x11;
          }
          if ((*(uint *)(lVar13 + 800) & 2) != 0) {
            uVar14 = uVar12;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar14);
          uVar11 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar11;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x8a0));
  }
  return;
}

