
void FUN_01ea5580(long *param_1,uint param_2,long param_3,ulong param_4)

{
  uint *puVar1;
  short *psVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  long *plVar14;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = (uint *)((long)param_1 + 0x77f4);
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xf00) = 0;
    param_1[0xf03] = 0;
    param_1[0xf05] = 0;
    param_1[0xf06] = 0;
    param_1[0xf07] = 0;
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    *(undefined8 *)((long)param_1 + 0x785c) = 0;
    *(undefined4 *)(param_1 + 0xf0b) = 0xbf800000;
    param_1[0xf09] = 0x41c8000041800000;
    *(undefined8 *)((long)param_1 + 0x7861) = 0;
    param_1[0xf0a] = -0x407fffff40800000;
    uVar3 = (undefined4)local_58;
    uVar6 = local_58._4_4_;
    local_58 = 0xfffe;
    *(undefined4 *)(param_1 + 0xf08) = uVar3;
    *(undefined4 *)((long)param_1 + 0x7844) = uVar6;
    FUN_0277d4ac(&local_58);
    *(undefined4 *)((long)param_1 + 0x7874) = 0;
    *(undefined2 *)(param_1 + 0xf0f) = 0;
    *(undefined8 *)((long)param_1 + 0x787c) = 0;
    *(undefined8 *)((long)param_1 + 0x7884) = 0;
    *(undefined8 *)((long)param_1 + 0x788c) = 0;
    *(undefined8 *)((long)param_1 + 0x7894) = 0;
    *(undefined4 *)((long)param_1 + 0x789c) = 0;
    *(undefined4 *)((long)param_1 + 0x786c) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0xf0e) = local_58._4_4_;
    *(undefined1 *)param_1[0xf15] = 0;
    *(undefined1 *)param_1[0xf1c] = 0;
  }
  else {
    FUN_00b12060(param_1 + 0xf00,param_3);
  }
  psVar12 = (short *)((long)param_1 + 0x786c);
  psVar2 = (short *)((long)param_1 + 0xae84);
  if (*(int *)((long)param_1 + 0xae8c) != 1) {
    psVar2 = (short *)((long)param_1 + 0xae7c);
  }
  if ((*psVar12 == -2) && (*psVar2 != -2)) {
    uVar3 = *(undefined4 *)(psVar2 + 2);
    sVar4 = psVar2[1];
    *(short *)((long)param_1 + 0x786c) = *psVar2;
    *(short *)((long)param_1 + 0x786e) = sVar4;
    *(undefined4 *)(param_1 + 0xf0e) = uVar3;
  }
  if ((param_4 & 1) == 0) goto LAB_01ea5a7c;
  uVar11 = param_1[0x15ab];
  uVar5 = param_2 - 3;
  if ((uVar5 < 5) || (((uint)uVar11 >> 0x1e & 1) == 0)) {
    if ((uVar11 & 0x80002000000000) != 0x2000000000) {
LAB_01ea575c:
      if ((((uVar5 < 5) || (*(int *)(param_1[1] + 0x750) != 1)) ||
          (uVar11 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2), (uVar11 & 1) != 0)) ||
         ((*(int *)((long)param_1 + 0x7874) != 0 || (((ulong)param_1[0x15ab] >> 0x22 & 1) != 0)))) {
        if (*(int *)(param_1[1] + 0x750) == 2) {
          if (param_2 < 0x17) {
            if ((1 << (ulong)(param_2 & 0x1f) & 0x4000d8U) != 0) goto LAB_01ea59dc;
            if (param_2 != 5) goto LAB_01ea59b4;
            uVar11 = param_1[0x15ab];
            if ((*(int *)((long)param_1 + 0x7874) != 0) ||
               ((uVar11 & 0x2000400000000) != 0x2000000000000)) {
              if ((uVar11 >> 0x37 & 1) != 0) {
                bVar10 = false;
                param_2 = 5;
                goto LAB_01ea5a80;
              }
              goto LAB_01ea5a7c;
            }
            uVar11 = uVar11 & 0xfffdffffffffffff;
            *puVar1 = 5;
          }
          else {
LAB_01ea59b4:
            if ((*(int *)((long)param_1 + 0x7874) != 0) ||
               (uVar11 = param_1[0x15ab], (uVar11 >> 0x22 & 1) != 0)) goto LAB_01ea59d4;
            *puVar1 = param_2;
          }
          uVar11 = uVar11 | 0x40000;
          param_2 = 0x17;
        }
        else {
          if (((uVar5 < 5) || (*(int *)(param_1[1] + 0x750) != 3)) ||
             ((uVar11 = (**(code **)(*param_1 + 0x2e0))(param_1,param_2), (uVar11 & 1) != 0 ||
              ((*(int *)((long)param_1 + 0x7874) != 0 || (((ulong)param_1[0x15ab] >> 0x22 & 1) != 0)
               ))))) {
LAB_01ea59d4:
            if (param_2 == 0x11) goto LAB_01ea5a7c;
LAB_01ea59dc:
            if (((ulong)param_1[0x15ab] >> 0x37 & 1) == 0) {
              if (param_2 == 0x12) {
                if (((ulong)param_1[0x15ab] >> 0x25 & 1) != 0) {
LAB_01ea59fc:
                  plVar14 = *(long **)(param_1[1] + 0x60);
                  if (plVar14 == (long *)0x0) {
                    if ((DAT_052461c0 & 1) == 0) {
                      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
                      plVar14 = &DAT_05240280;
                      if (iVar8 != 0) {
                        FUN_016fcf10(&DAT_05240280);
                        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                        __cxa_guard_release(&DAT_052461c0);
                      }
                    }
                    else {
                      plVar14 = &DAT_05240280;
                    }
                  }
                  (**(code **)(*plVar14 + 0x370))(&local_58,plVar14);
                  uVar11 = FUN_0277d7b4(&local_58,psVar12);
                  if (((uVar11 & 1) == 0) &&
                     ((param_1[0x1549] == 0 || (uVar11 = FUN_0215c534(), (uVar11 & 1) == 0)))) {
                    if ((*(uint *)(param_1[1] + 0x248) >> 4 & 1) != 0) {
                      *puVar1 = param_2;
                      uVar11 = param_1[0x15ab] & 0xfff7ffffffffffffU | 0x40000;
                      goto LAB_01ea5ae0;
                    }
                    FUN_01e57c78(param_1[2],psVar12,0,1);
                  }
                }
              }
              else if (4 < uVar5) goto LAB_01ea59fc;
            }
LAB_01ea5a7c:
            bVar10 = false;
            goto LAB_01ea5a80;
          }
          uVar11 = param_1[0x15ab] | 0x40000;
          *puVar1 = param_2;
          param_2 = 0x19;
        }
      }
      else {
        uVar11 = param_1[0x15ab] | 0x40000;
        *puVar1 = param_2;
        param_2 = 0x15;
      }
      goto LAB_01ea56dc;
    }
    if (param_2 != 0x12) {
      if (4 < uVar5) goto LAB_01ea5714;
      goto LAB_01ea575c;
    }
    if ((uVar11 >> 0x25 & 1) == 0) goto LAB_01ea575c;
LAB_01ea5714:
    plVar14 = *(long **)(param_1[1] + 0x60);
    if (plVar14 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        plVar14 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar14 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar14 + 0x370))(auStack_60,plVar14);
    uVar11 = FUN_0277d7b4(auStack_60,psVar12);
    if ((uVar11 & 1) != 0) goto LAB_01ea575c;
    lVar13 = param_1[0x1549];
    if ((lVar13 != 0) && (**(char **)(lVar13 + 0x798) != '\0')) {
      uVar7 = FUN_01ad5de0(lVar13 + 0x790);
      local_58 = (ulong)uVar7;
      FUN_0277d4ac(&local_58);
      uVar9 = FUN_01e57b44(*(undefined8 *)(*(long *)(lVar13 + 8) + 0x3b0));
      uVar11 = FUN_0277d7b4(uVar9,&local_58);
      if ((uVar11 & 1) != 0) goto LAB_01ea575c;
    }
    iVar8 = *(int *)(param_1[1] + 0x750);
    if (iVar8 == 1) {
      uVar11 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
      if ((uVar11 & 1) != 0) {
        iVar8 = *(int *)(param_1[1] + 0x750);
        goto LAB_01ea58d8;
      }
LAB_01ea58e8:
      if ((*(int *)((long)param_1 + 0x7874) == 0) &&
         ((*(byte *)((long)param_1 + 0xad5c) >> 2 & 1) == 0)) {
        plVar14 = *(long **)(param_1[1] + 0x60);
        if (plVar14 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(&DAT_052461c0);
            plVar14 = &DAT_05240280;
            if (iVar8 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar14 = &DAT_05240280;
          }
        }
        (**(code **)(*plVar14 + 0x370))(&local_58,plVar14);
        if ((short)local_58 == -2) goto LAB_01ea575c;
      }
    }
    else {
LAB_01ea58d8:
      if ((param_2 != 0x16) && (iVar8 == 2)) goto LAB_01ea58e8;
    }
    *puVar1 = param_2;
    param_1[0x15ab] = param_1[0x15ab] & 0xfff7ffffffffffffU | 0x40000;
    iVar8 = *(int *)(param_1[1] + 0x750);
    if (iVar8 == 1) {
      uVar11 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
      if ((uVar11 & 1) != 0) {
        iVar8 = *(int *)(param_1[1] + 0x750);
        goto LAB_01ea5980;
      }
    }
    else {
LAB_01ea5980:
      bVar10 = true;
      if (param_2 == 0x16) {
        param_2 = 0x11;
        goto LAB_01ea5a80;
      }
      param_2 = 0x11;
      if (iVar8 != 2) goto LAB_01ea5a80;
    }
    if ((*(int *)((long)param_1 + 0x7874) == 0) && (((ulong)param_1[0x15ab] >> 0x22 & 1) == 0)) {
      uVar11 = param_1[0x15ab] | 0x8000000000000;
LAB_01ea5ae0:
      param_1[0x15ab] = uVar11;
    }
    param_2 = 0x11;
  }
  else {
    uVar11 = uVar11 | 0x40000;
    *puVar1 = param_2;
    param_2 = 0x1c;
LAB_01ea56dc:
    param_1[0x15ab] = uVar11;
  }
  bVar10 = true;
LAB_01ea5a80:
  uVar11 = param_1[0x15ab];
  if (((uint)uVar11 >> 0x19 & 1) != 0) {
    uVar11 = uVar11 | 0x400000000000;
    param_1[0x15ab] = uVar11;
  }
  if (!bVar10) {
    param_1[0x15ab] = uVar11 & 0xfffffffffffbffff;
    *puVar1 = 0xffffffff;
  }
  FUN_03ebb160(param_1 + 0xef5,param_2);
  return;
}

