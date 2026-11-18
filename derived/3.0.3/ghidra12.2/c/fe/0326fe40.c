
void FUN_0326fe40(long param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  undefined *local_80;
  undefined4 local_78;
  uint local_68;
  uint local_64;
  
  puVar7 = PTR_DAT_04bc4d98;
  lVar17 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  uVar5 = *(uint *)(lVar17 + 0x2f8);
  if (0 < (int)uVar5) {
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    uVar18 = 0;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    plVar13 = (long *)PTR_DAT_04bc4d90;
    do {
      if ((long)uVar18 < (long)(int)*(uint *)(lVar17 + 0x208) && uVar18 < *(uint *)(lVar17 + 0x208))
      {
        puVar14 = *(undefined8 **)(*(long *)(lVar17 + 0x210) + uVar18 * 8);
      }
      else {
        puVar14 = (undefined8 *)0x0;
      }
      if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
        *plVar13 = (long)puVar1;
        __cxa_guard_release(puVar7);
      }
      if ((puVar14 == (undefined8 *)0x0) ||
         (uVar9 = (**(code **)*puVar14)(puVar14,plVar13), (uVar9 & 1) == 0)) goto LAB_0326fed0;
      local_64 = 0;
      FUN_03264a78(&local_80,param_1 + 0x228,(int)uVar18 + param_2);
      puVar4 = PTR_DAT_04bb5ce0;
      puVar6 = PTR_DAT_04bb3170;
      switch(local_80._0_4_) {
      case 4:
        uVar16 = *(uint *)(param_1 + 0xaa8e8);
        if ((int)uVar16 < 0) {
LAB_03270024:
          local_68 = 0xffffffff;
        }
        else {
          local_68 = 0xffffffff;
          if ((int)uVar16 < *(int *)(param_1 + 0xaa8d0)) {
            lVar11 = param_1 + 0xaa8c0;
            if (6 < uVar16) {
              uVar12 = uVar16 + 1 & 0xfffffff8;
              do {
                uVar12 = uVar12 - 8;
                lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar11 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar12 != 0);
            }
            for (uVar16 = uVar16 + 1 & 7; uVar16 != 0; uVar16 = uVar16 - 1) {
              lVar11 = *(long *)(lVar11 + 8);
            }
            if (lVar11 == 0) goto LAB_03270024;
            lVar11 = lVar11 - *(int *)(param_1 + 0xaa8d4);
            local_68 = 0xffffffff;
            if (lVar11 != 0) {
              local_68 = *(uint *)(lVar11 + 0x270);
            }
          }
        }
        if (local_68 == 8) {
          puVar4 = PTR_DAT_04bb3170;
          if (*(long *)PTR_DAT_04bb5ce0 != 0) {
            puVar4 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
          }
          FUN_007ef010(&local_68,puVar4);
          if (((local_68 & 0xffff) != (uint)*(ushort *)puVar6) ||
             ((*(long *)PTR_DAT_04bb5ce0 != 0 && (*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xfa8) != -1)
              ))) goto switchD_0326ff58_caseD_5;
        }
        else if (local_68 == 9) {
          puVar3 = PTR_DAT_04bb3170;
          if (*(long *)PTR_DAT_04bb5ce0 != 0) {
            puVar3 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
          }
          FUN_007ef010(&local_68,puVar3);
          lVar11 = *(long *)puVar4;
          if ((local_68 & 0xffff) == (uint)*(ushort *)puVar6) {
            if (lVar11 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = *(int *)(lVar11 + 0xf90);
            }
            uVar12 = (uint)(iVar8 != -1);
          }
          else {
            uVar12 = 1;
          }
          puVar4 = puVar6;
          if (lVar11 != 0) {
            puVar4 = (undefined *)(lVar11 + 0xe9c);
          }
          FUN_007ef010(&local_68,puVar4);
          if ((local_68 & 0xffff) == (uint)*(ushort *)puVar6) {
            if (*(long *)PTR_DAT_04bb5ce0 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf9c);
            }
            uVar10 = (uint)(iVar8 != -1);
          }
          else {
            uVar10 = 1;
          }
          uVar16 = uVar12 | uVar10;
          local_64 = 2;
          plVar13 = (long *)PTR_DAT_04bc4d90;
          if ((uVar12 & uVar10) == 0) {
            local_64 = uVar12 ^ 1;
          }
          break;
        }
      default:
        uVar16 = 0;
        break;
      case 5:
      case 7:
switchD_0326ff58_caseD_5:
        uVar16 = 1;
        break;
      case 6:
        uVar16 = 1;
        local_64 = 1;
      }
      if ((param_3 & 1) == 0) {
        uVar12 = uVar16;
LAB_032700ec:
        FUN_030bfe80(puVar14,uVar12);
      }
      else {
        if (uVar16 == 0) {
          uVar12 = 0;
          goto LAB_032700ec;
        }
        FUN_030bffe0(puVar14,1);
      }
      lVar11 = 0x28;
      if (*(uint *)(puVar14 + 0x5d) < 6) {
        lVar11 = 0;
      }
      plVar15 = *(long **)(puVar14[0x5e] + lVar11);
      uVar16 = uVar16 ^ 1;
      if (plVar15 == (long *)0x0) {
        uVar16 = 1;
      }
      if (uVar16 == 0) {
        fVar19 = (float)(int)local_64;
        local_78 = 0x14;
        local_80 = puVar2;
        (**(code **)(*plVar15 + 0x18))(plVar15,&local_80);
        (**(code **)(plVar15[3] + 0x158))(fVar19,plVar15[1]);
      }
LAB_0326fed0:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar5);
  }
  return;
}

