
void FUN_008d6be0(long param_1,undefined4 *param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *__dest;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  size_t __n;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined **local_80;
  byte local_78;
  undefined4 local_74;
  long local_70;
  
  puVar3 = PTR_DAT_04bb3350;
  plVar7 = (long *)(param_1 + 0x309c8);
  lVar13 = *(long *)(param_1 + 0x38020);
  if (lVar13 == 0) {
    lVar15 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar13;
  }
  plVar16 = (long *)*plVar7;
  if (plVar16 != (long *)(param_1 + 0x309c0)) {
    puVar10 = (uint *)(plVar16 + -2);
    do {
      plVar14 = *(long **)(puVar10 + 2);
      if (plVar14 != (long *)0x0) {
        uVar9 = *(uint *)(param_1 + 0x358);
        if (0 < (int)uVar9) {
          __dest = *(undefined8 **)(param_1 + 0x360);
          uVar11 = 0;
          __n = (long)(int)uVar9 * 8;
          do {
            __n = __n - 8;
            if ((long *)*__dest == plVar14) {
              iVar4 = (int)uVar11;
              if (-1 < iVar4) {
                if (iVar4 < (int)uVar9) {
                  if (iVar4 + 1 < (int)uVar9) {
                    memmove(__dest,__dest + 1,__n);
                    uVar9 = *(uint *)(param_1 + 0x358);
                  }
                  *(uint *)(param_1 + 0x358) = uVar9 - 1;
                }
                plVar14[4] = 0;
              }
              break;
            }
            uVar11 = uVar11 + 1;
            __dest = __dest + 1;
          } while (uVar9 != uVar11);
        }
        (**(code **)(*plVar14 + 8))(plVar14);
      }
      plVar16 = (long *)plVar16[1];
      puVar10 = (uint *)(plVar16 + -2);
    } while (puVar10 != (uint *)(param_1 + 0x309b0));
  }
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  plVar16 = (long *)*plVar7;
  while (plVar16 != (long *)(param_1 + 0x309c0)) {
    plVar14 = (long *)plVar16[1];
    plVar12 = plVar14;
    if (*plVar16 != 0) {
      *(long **)(*plVar16 + 8) = plVar14;
      plVar12 = (long *)plVar16[1];
    }
    if (plVar12 != (long *)0x0) {
      *plVar12 = *plVar16;
    }
    *plVar16 = 0;
    plVar16[1] = 0;
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + -1;
    plVar16[-2] = *(long *)(param_1 + 0x309d8);
    *(long **)(param_1 + 0x309d8) = plVar16 + -2;
    plVar16 = plVar14;
  }
  local_74 = *param_2;
  local_80 = &PTR_LAB_04926030;
  local_78 = param_3 & 1;
  local_70 = param_1;
  FUN_020b020c(*(undefined8 *)PTR_DAT_04bb3968,&local_80);
  puVar2 = PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb27c0;
  lVar13 = *plVar7;
  do {
    puVar10 = (uint *)(lVar13 + -0x10);
    if (puVar10 == (uint *)(param_1 + 0x309b0)) {
      return;
    }
    lVar15 = *(long *)puVar1;
    if (lVar15 != 0) {
      uVar9 = *puVar10;
      if ((((uVar9 == 0) ||
           (lVar5 = *(long *)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), lVar5 == 0)) ||
          ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar5 + 0x230) != uVar9)) {
        lVar5 = 0;
      }
      if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        lVar15 = *(long *)puVar1;
        iVar4 = (**(code **)(*plVar7 + 0x60))();
        if (iVar4 < 0x11) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(uint *)(lVar15 + 0x5e8);
          if (4 < uVar9) goto LAB_008d6ed0;
          uVar9 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
        }
      }
      else {
LAB_008d6ed0:
        uVar9 = 0;
      }
      if (lVar5 != 0) {
        uVar9 = uVar9 ^ 1;
        if (*(int *)(lVar5 + 0x150) != 1) {
          uVar9 = 1;
        }
        if ((uVar9 == 0) && (lVar15 = *(long *)(lVar5 + 0x68), lVar15 != 0)) {
          lVar5 = *(long *)PTR_DAT_04bb2698;
          if (lVar5 == 0) {
            pvVar6 = malloc(0x48);
          }
          else {
            plVar7 = *(long **)(param_1 + 0x38020);
            if (plVar7 == (long *)0x0) {
              lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
              plVar7 = (long *)(lVar5 + 8);
              if (lVar8 != 0) {
                plVar7 = (long *)(lVar8 + 0xa8);
              }
              plVar7 = (long *)*plVar7;
            }
            pvVar6 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x48,8);
          }
          FUN_009047a4(pvVar6,puVar10,lVar15 + 0x278,puVar2);
          *(undefined4 *)((long)pvVar6 + 0x38) = *(undefined4 *)(param_1 + 0x230);
          FUN_008a8af0(param_1,pvVar6);
          *(void **)(puVar10 + 2) = pvVar6;
        }
      }
    }
    lVar13 = *(long *)(lVar13 + 8);
  } while( true );
}

