
undefined8 FUN_009a0268(long *param_1,short *param_2,undefined8 param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  short *psVar15;
  short *psVar16;
  long local_80 [2];
  long local_70;
  char local_67;
  char local_66;
  
  puVar4 = PTR_DAT_04bb27c0;
  puVar12 = (uint *)((long)param_1 + 0xc);
  uVar1 = *puVar12;
  if (uVar1 == 0 || (int)param_1[1] == -1) {
    return 1;
  }
  if ((param_5 & 1) != 0) {
    return 1;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
LAB_009a0370:
    uVar13 = *(uint *)(param_1 + 2) & 1;
    uVar1 = uVar13 ^ 1;
    psVar16 = (short *)((long)param_1 + (ulong)uVar13 * 0x18 + 0x14);
    psVar15 = (short *)((long)param_1 + (ulong)uVar1 * 0x18 + 0x14);
    uVar8 = (**(code **)(*param_1 + 0x28))(param_1,psVar16,param_2);
    if (((uVar8 & 1) != 0) && ((char)param_1[0x11] != '\0')) {
      if (*psVar16 == -2) goto LAB_009a0778;
      piVar10 = (int *)(psVar16 + 6);
      if (*piVar10 != 0) {
        FUN_0071cb58(local_80,piVar10,puVar12,0);
        if (local_80[0] != 0) {
          plVar7 = param_1 + (ulong)uVar1 * 3 + 4;
          if ((int)*plVar7 != 0) {
            FUN_0071c8d0(&local_70,plVar7,puVar12,0);
            if (local_70 != 0) {
              if (local_67 == '\0') goto LAB_009a0778;
              FUN_006fb3d0();
            }
            FUN_0099ffb0(psVar15,puVar12,0,1);
          }
          *(int *)plVar7 = 0;
          *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0x18 + 0x24) = 0;
          puVar4 = PTR_DAT_04bb37e0;
          *psVar15 = *(short *)PTR_DAT_04bb37e0;
          *(undefined *)(psVar15 + 1) = puVar4[2];
          *(undefined *)((long)psVar15 + 3) = puVar4[3];
          uVar6 = *(undefined4 *)(puVar4 + 4);
          *(undefined2 *)(param_1 + (ulong)uVar1 * 3 + 5) = 0;
          *(undefined4 *)(psVar15 + 2) = uVar6;
          psVar15[4] = 0;
          psVar15[5] = 0;
          goto LAB_009a0778;
        }
        if (*piVar10 != 0) {
          FUN_0071c8d0(&local_70,piVar10,puVar12,0);
          if (local_70 != 0) {
            if (local_67 == '\0') goto LAB_009a04f4;
            FUN_006fb3d0();
          }
          FUN_0099ffb0(psVar16,puVar12,0,1);
        }
        *piVar10 = 0;
        *(undefined4 *)((long)param_1 + (ulong)uVar13 * 0x18 + 0x24) = 0;
        puVar4 = PTR_DAT_04bb37e0;
        *psVar16 = *(short *)PTR_DAT_04bb37e0;
        *(undefined *)(psVar16 + 1) = puVar4[2];
        *(undefined *)((long)psVar16 + 3) = puVar4[3];
        uVar6 = *(undefined4 *)(puVar4 + 4);
        *(undefined2 *)(param_1 + (ulong)uVar13 * 3 + 5) = 0;
        *(undefined4 *)(psVar16 + 2) = uVar6;
        psVar16[4] = 0;
        psVar16[5] = 0;
      }
    }
LAB_009a04f4:
    piVar10 = (int *)((long)param_1 + (ulong)uVar1 * 0x18 + 0x24);
    plVar7 = param_1 + (ulong)uVar1 * 3 + 4;
    if (*piVar10 - 1U < 2) {
      if (*psVar15 == -2) {
        FUN_009a07f0(psVar15,param_4 & 1);
LAB_009a0528:
        *(undefined1 *)(param_1 + 0x11) = 1;
        uVar8 = (**(code **)(*param_1 + 0x28))(param_1,psVar15,param_2);
        if ((uVar8 & 1) != 0) {
          lVar11 = (long)param_1 + ((ulong)~*(uint *)(param_1 + 2) & 1) * 0x18 + 0x14;
          *(undefined4 *)(lVar11 + 0x10) = 0;
          FUN_0099ffb0(lVar11,puVar12,1,1);
          FUN_0099feec((long)param_1 + ((ulong)*(uint *)(param_1 + 2) & 1) * 0x18 + 0x14,puVar12,
                       *(undefined1 *)((long)param_1 + 0xaa));
          uVar1 = (int)param_1[2] + 1;
          *(uint *)(param_1 + 2) = uVar1;
          plVar7 = param_1 + 0xd;
          uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
          if ((uVar8 & 1) == 0) {
            return 2;
          }
          if (*(short *)((long)param_1 + (ulong)(uVar1 & 1) * 0x18 + 0x14) == -2) {
            return 2;
          }
          (**(code **)*plVar7)(plVar7);
          return 2;
        }
        FUN_0099feec(psVar15,puVar12,*(undefined1 *)((long)param_1 + 0xaa));
        if ((param_4 & 1) != 0) goto LAB_009a0778;
      }
      else {
        lVar11 = *plVar7;
        FUN_0071cb58(&local_70,plVar7,puVar12,0);
        if (((int)lVar11 == 0) || (local_70 != 0)) {
          if (((local_66 == '\0') || (local_70 == 0)) ||
             ((*(int *)(local_70 + 0x150) != 2 && ((*(uint *)(local_70 + 0x248) >> 1 & 1) == 0)))) {
            uVar8 = FUN_009a07f0(psVar15,param_4 & 1);
            if ((uVar8 & 1) == 0) goto LAB_009a07cc;
            goto LAB_009a0528;
          }
          FUN_0099feec(psVar15,puVar12,*(undefined1 *)((long)param_1 + 0xaa));
          if ((param_4 & 1) != 0) goto LAB_009a0778;
        }
        else {
          FUN_0099feec(psVar15,puVar12,*(undefined1 *)((long)param_1 + 0xaa));
        }
        if (*param_2 != -2) {
          FUN_009a0268(param_1,param_2,param_3,param_4 & 1,0);
        }
      }
    }
    else {
      if (*param_2 == -2) {
        *psVar15 = -2;
        *(char *)(psVar15 + 1) = (char)param_2[1];
        *(undefined1 *)((long)psVar15 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(psVar15 + 2) = *(undefined4 *)(param_2 + 2);
        uVar6 = *(undefined4 *)(param_2 + 4);
        *(int *)plVar7 = 0;
        *(undefined4 *)(psVar15 + 4) = uVar6;
        *piVar10 = 1;
        return 0;
      }
      if ((int)*plVar7 == 0) {
        plVar7 = param_1 + 9;
        uVar6 = (undefined4)param_1[1];
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
        if ((uVar8 & 1) != 0) {
          uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
          if ((uVar8 & 1) == 0) {
            uVar6 = (undefined4)param_1[1];
          }
          else if (*param_2 == -2) {
            uVar6 = (undefined4)param_1[1];
          }
          else {
            uVar6 = (**(code **)*plVar7)(plVar7,param_2);
          }
        }
        uVar3 = (undefined1)param_1[0x15];
        uVar2 = *(undefined1 *)((long)param_1 + 0xa9);
      }
      else {
        FUN_0071cb58(&local_70,plVar7,puVar12,0);
        if (local_70 != 0) goto LAB_009a07cc;
        uVar6 = FUN_009a0930(param_1,param_2);
        uVar3 = (undefined1)param_1[0x15];
        uVar2 = *(undefined1 *)((long)param_1 + 0xa9);
      }
      FUN_009a09c0(psVar15,uVar6,puVar12,param_2,param_3,uVar3,uVar2);
    }
LAB_009a07cc:
    uVar9 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar1 >> 0x11) & 0x7ff8))
    ;
    if (((lVar14 == 0) || ((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar14 + 0x230) != uVar1)) {
      lVar14 = 0;
    }
    if (*(int *)(lVar11 + 0x288) != 1 && *(int *)(lVar11 + 0x288) != -1) goto LAB_009a0370;
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if ((((0x10 < iVar5) &&
         ((4 < *(uint *)(lVar11 + 0x5e8) ||
          ((1 << (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 0x1aU) == 0)))) || (lVar14 == 0)) ||
       ((*(uint *)(lVar14 + 0x248) >> 1 & 1) == 0)) goto LAB_009a0370;
LAB_009a0778:
    uVar9 = 1;
  }
  return uVar9;
}

