
void FUN_03b10e10(long param_1,long *param_2,long param_3,undefined8 param_4,uint *param_5,
                 long param_6)

{
  char *pcVar1;
  size_t __size;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  ulong *puVar20;
  undefined *puVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  char *local_248;
  undefined8 local_240;
  char local_238 [128];
  long *local_1b8;
  undefined8 local_1b0;
  undefined *local_188;
  char *local_180;
  undefined4 local_178;
  char local_174 [255];
  undefined1 local_75;
  undefined1 local_70;
  
  *(long *)(param_1 + 0x38) = param_6;
  if (param_6 != 0) {
    *(long *)(param_6 + 8) = param_1;
  }
  puVar21 = PTR_DAT_04bb2698;
  if (param_3 != 0) {
    FUN_03b1307c(param_1 + 8,param_2);
    uVar23 = *(uint *)(*(long *)(param_1 + 8) + 0x38);
    uVar24 = (ulong)uVar23;
    if (0 < (int)uVar23) {
      lVar19 = *(long *)puVar21;
      __size = uVar24 * 0x108 + 8;
      if (lVar19 == 0) {
        puVar11 = malloc(__size);
      }
      else {
        plVar10 = param_2;
        if (param_2 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar19 + 8);
          if (lVar9 != 0) {
            plVar10 = (long *)(lVar9 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_03b10f1c;
        }
        puVar11 = (ulong *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
      }
      if (puVar11 != (ulong *)0x0) {
        lVar19 = uVar24 * 0x108;
        *puVar11 = uVar24;
        puVar20 = puVar11 + 1;
        do {
          FUN_0035b6f8(puVar20);
          puVar20 = puVar20 + 0x21;
          lVar19 = lVar19 + -0x108;
        } while (lVar19 != 0);
        *(uint *)(param_1 + 0x10) = uVar23;
        *(ulong **)(param_1 + 0x18) = puVar11 + 1;
      }
    }
  }
LAB_03b10f1c:
  uVar23 = *param_5;
  uVar24 = (ulong)uVar23;
  if (0 < (int)uVar23) {
    lVar19 = *(long *)puVar21;
    if (lVar19 == 0) {
      pvVar12 = malloc(uVar24 << 3);
      if (pvVar12 == (void *)0x0) goto LAB_03b10f98;
LAB_03b10f80:
      *(uint *)(param_1 + 0x20) = uVar23;
      *(void **)(param_1 + 0x28) = pvVar12;
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar5 = (undefined8 *)(lVar19 + 8);
        if (lVar9 != 0) {
          puVar5 = (undefined8 *)(lVar9 + 0xa8);
        }
        param_2 = (long *)*puVar5;
        if (param_2 == (long *)0x0) goto LAB_03b10f98;
      }
      pvVar12 = (void *)(**(code **)(*param_2 + 0x30))(param_2,uVar24 << 3,8);
      if (pvVar12 != (void *)0x0) goto LAB_03b10f80;
LAB_03b10f98:
      uVar24 = (ulong)*(uint *)(param_1 + 0x20);
      if ((int)*(uint *)(param_1 + 0x20) < 1) goto LAB_03b11024;
    }
    uVar15 = uVar24 & 3;
    if (uVar24 - 1 < 3) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      do {
        lVar19 = uVar17 * 8;
        uVar17 = uVar17 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar19) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar19 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar19 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar19 + 0x18) = 0;
      } while ((uVar24 & 0xfffffffc) != uVar17);
    }
    if (uVar15 != 0) {
      lVar19 = uVar17 << 3;
      do {
        uVar15 = uVar15 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar19) = 0;
        lVar19 = lVar19 + 8;
      } while (uVar15 != 0);
    }
  }
LAB_03b11024:
  puVar21 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 8) != 0) {
    pcVar16 = *(code **)(*(long *)PTR_DAT_04bbd7c0 + 0x20);
    if (pcVar16 == (code *)0x0) {
      nn::os::LockMutex((MutexType *)(*(long *)(*(long *)PTR_DAT_04bbd7c0 + 0x28) + 0x28));
    }
    else {
      (*pcVar16)(1);
    }
    local_75 = 0;
    local_178 = 0x100;
    local_180 = local_174;
    local_174[0] = '\0';
    local_1b8 = *(long **)(param_1 + 8);
    lVar19 = (long)&local_1b0 + 4;
    local_248 = puVar21 + 0x10;
    local_70 = 0;
    local_188 = PTR_DAT_04bb21f8 + 0x10;
    local_1b0 = CONCAT44(local_1b0._4_4_,0xffffffff);
    local_240 = &DAT_0407ebb1;
    (**(code **)(*local_1b8 + 0x50))(local_1b8,lVar19,&local_248);
    iVar8 = (**(code **)(*local_1b8 + 0x60))(local_1b8,lVar19,&local_188,1);
    puVar21 = PTR_LAB_04bd1da8;
    if (iVar8 == 1) {
      do {
        local_238[0] = '\0';
        local_240 = (undefined8 *)0x8000000000;
        local_1b0 = CONCAT44(local_1b0._4_4_,(uint)local_1b0 + 1);
        local_248 = local_238;
        (**(code **)(local_188 + 0x18))(&local_188);
        pcVar18 = local_248;
        if (local_248 != local_180) {
          lVar9 = 0;
          do {
            pcVar1 = local_180 + lVar9;
            lVar9 = lVar9 + 1;
          } while (*pcVar1 != '\0');
          uVar23 = (int)lVar9 - 1;
          if (local_240._4_4_ <= (int)uVar23) {
            uVar23 = local_240._4_4_ - 1;
          }
          if ((int)uVar23 < 1) {
            uVar23 = 0;
          }
          else {
            memcpy(local_248,local_180,(ulong)uVar23);
            pcVar18 = pcVar18 + uVar23;
          }
          *pcVar18 = '\0';
          local_240 = (undefined8 *)CONCAT44(local_240._4_4_,uVar23);
        }
        uVar13 = (**(code **)(*local_1b8 + 0x38))(local_1b8,local_1b0 & 0xffffffff,0);
        uVar23 = (uint)local_1b0;
        uVar14 = (uint)local_1b0;
        if (*(uint *)(param_1 + 0x10) <= (uint)local_1b0) {
          uVar14 = 0;
        }
        FUN_0035b790(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 0x108,
                     *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),uVar13,0,0,0);
        uVar14 = uVar23;
        if (*(uint *)(param_1 + 0x10) <= uVar23) {
          uVar14 = 0;
        }
        FUN_0035bc14(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 0x108,puVar21,0);
        if (*param_5 != 0) {
          if ((int)local_240 < 0) {
            uVar24 = 0;
            uVar14 = 0;
LAB_03b11118:
            lVar9 = (long)(int)uVar24;
            if (*(uint *)(param_1 + 0x10) <= uVar23) {
              uVar23 = 0;
            }
            if (*(uint *)(param_1 + 0x20) <= uVar14) {
              lVar9 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x28) + lVar9 * 8) =
                 *(long *)(param_1 + 0x18) + (long)(int)uVar23 * 0x108;
          }
          else {
            uVar15 = 0;
            uVar24 = 0;
            do {
              uVar14 = (uint)uVar15;
              pcVar18 = *(char **)(*(long *)(param_5 + 2) +
                                  (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
              if (*local_248 == *pcVar18) {
                lVar9 = 1;
                do {
                  lVar22 = lVar9;
                  if (((ulong)local_240 & 0xffffffff) + 1 == lVar22) goto LAB_03b11118;
                  lVar9 = lVar22 + 1;
                } while (local_248[lVar22] == pcVar18[lVar22]);
                if (((ulong)local_240 & 0xffffffff) <= lVar22 - 1U) goto LAB_03b11118;
              }
              uVar15 = uVar24 + 1;
              uVar24 = uVar15 & 0xffffffff;
            } while (*param_5 != (uint)uVar15);
          }
        }
        iVar8 = (**(code **)(*local_1b8 + 0x60))(local_1b8,lVar19,&local_188,1);
      } while (iVar8 == 1);
    }
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x58))(local_1b8,lVar19);
    }
    puVar21 = PTR_DAT_04bb2020;
    pcVar16 = *(code **)(*(long *)PTR_DAT_04bbd7c0 + 0x20);
    if (pcVar16 == (code *)0x0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(*(long *)PTR_DAT_04bbd7c0 + 0x28) + 0x28));
      lVar19 = *(long *)(param_1 + 0x38);
      goto joined_r0x03b1133c;
    }
    (*pcVar16)(0);
  }
  lVar19 = *(long *)(param_1 + 0x38);
joined_r0x03b1133c:
  if ((lVar19 != 0) && (uVar23 = *param_5, uVar23 != 0)) {
    lVar19 = *(long *)(param_5 + 2);
    uVar24 = 0;
    uVar15 = 0;
    do {
      local_1b0 = *(long *)(lVar19 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      iVar8 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
      if (iVar8 != 0) {
        lVar22 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
        iVar25 = 0;
        lVar9 = (long)(int)uVar15;
        local_1b8 = (long *)(puVar21 + 0x10);
        do {
          plVar10 = (long *)(lVar22 + (long)iVar25 * 0x48);
          (*(code *)local_1b8[3])(&local_1b8);
          (*(code *)local_1b8[3])(&local_1b8);
          lVar2 = local_1b0;
          (**(code **)(*plVar10 + 0x18))(plVar10);
          if (lVar2 == plVar10[1]) {
LAB_03b11370:
            if (*(uint *)(param_1 + 0x20) <= (uint)uVar24) {
              lVar9 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x28) + lVar9 * 8) = lVar22 + (long)iVar25 * 0x48 + 0x10;
            break;
          }
          uVar17 = 0;
          lVar2 = plVar10[1] + 1;
          bVar7 = true;
          do {
            lVar3 = local_1b0 + 1 + uVar17;
            lVar4 = lVar2 + uVar17;
            cVar6 = *(char *)(lVar3 + -1);
            if (cVar6 != *(char *)(lVar4 + -1)) break;
            if (cVar6 == '\0') {
              if (bVar7) goto LAB_03b11370;
              break;
            }
            cVar6 = *(char *)(local_1b0 + 1 + uVar17);
            if (cVar6 != *(char *)(lVar2 + uVar17)) break;
            if (cVar6 == '\0') goto LAB_03b11370;
            cVar6 = *(char *)(lVar3 + 1);
            if (cVar6 != *(char *)(lVar4 + 1)) break;
            if (cVar6 == '\0') goto LAB_03b11370;
            bVar7 = uVar17 < 0x7fffe;
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
          iVar25 = iVar25 + 1;
        } while (iVar8 != iVar25);
      }
      uVar24 = uVar15 + 1;
      uVar15 = uVar24 & 0xffffffff;
    } while (uVar23 != (uint)uVar24);
  }
  return;
}

