
void FUN_03c56880(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  puVar6 = PTR_DAT_04bcadb8;
  puVar5 = PTR_DAT_04bcadb0;
  lVar11 = *(long *)(param_1 + 0xd0);
  if (lVar11 != 0) {
    local_65 = 0;
    local_a8 = 0x40;
    local_b0 = local_a4;
    local_a4[0] = 0;
    local_b8 = PTR_DAT_04bb2bc0 + 0x10;
    uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
    if (0 < (int)*(uint *)(lVar11 + 0x18)) {
      uVar14 = 0;
      puVar1 = PTR_DAT_04bcadc0 + 0x10;
      do {
        if (uVar14 < (uVar12 & 0xffffffff)) {
          plVar13 = *(long **)(*(long *)(lVar11 + 0x20) + uVar14 * 8);
        }
        else {
          plVar13 = (long *)0x0;
        }
        uVar12 = (**(code **)(*plVar13 + 0x28))(plVar13,&local_b8);
        if ((uVar12 & 1) == 0) {
          uVar8 = (**(code **)(*plVar13 + 0x38))(plVar13);
          uVar4 = *(uint *)((long)plVar13 + 0xc);
          lVar11 = *(long *)(param_1 + 8);
          if (((lVar11 != 0) && (*(char *)(param_1 + 0x18) != '\0')) &&
             (lVar10 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x30) + 0x18) + 0x20))(),
             *(char *)(lVar10 + 0x78) != '\0')) {
            if (*(char *)(lVar10 + 0x79) == '\0') {
              plVar3 = (long *)(lVar11 + 0x88) + *(uint *)(lVar11 + 0x80);
              if (1 < *(uint *)(lVar11 + 0x80)) {
                plVar3 = (long *)(lVar11 + 0x88);
              }
              lVar10 = *plVar3;
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
                uVar2 = uVar4;
                if (*(uint *)(lVar10 + 0x30) <= uVar4) {
                  uVar2 = 0;
                }
                if (*(long *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar2 * 8) != 0)
                goto LAB_03c56acc;
              }
            }
            else {
LAB_03c56acc:
              if ((-1 < (int)uVar4) &&
                 ((int)uVar4 < (int)*(short *)(*(long *)(lVar11 + 0x30) + 0x46))) {
                plVar3 = (long *)(lVar11 + 0x88) + *(uint *)(lVar11 + 0x80);
                if (1 < *(uint *)(lVar11 + 0x80)) {
                  plVar3 = (long *)(lVar11 + 0x88);
                }
                lVar11 = *plVar3;
                if ((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) {
                  uVar2 = uVar4;
                  if (*(uint *)(lVar11 + 0x30) <= uVar4) {
                    uVar2 = 0;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + (ulong)uVar2 * 8);
                  if (lVar11 != 0) {
                    *(undefined4 *)(lVar11 + 0x24) = uVar8;
                  }
                }
              }
            }
          }
          lVar11 = *(long *)(param_1 + 0x10);
          if (((lVar11 != 0) && (*(char *)(param_1 + 0x19) != '\0')) &&
             (lVar10 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x30) + 0x18) + 0x20))(),
             *(char *)(lVar10 + 0x78) != '\0')) {
            if (*(char *)(lVar10 + 0x79) == '\0') {
              plVar3 = (long *)(lVar11 + 0x88) + *(uint *)(lVar11 + 0x80);
              if (1 < *(uint *)(lVar11 + 0x80)) {
                plVar3 = (long *)(lVar11 + 0x88);
              }
              lVar10 = *plVar3;
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
                uVar2 = uVar4;
                if (*(uint *)(lVar10 + 0x30) <= uVar4) {
                  uVar2 = 0;
                }
                if (*(long *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar2 * 8) != 0)
                goto LAB_03c56bc8;
              }
            }
            else {
LAB_03c56bc8:
              if ((-1 < (int)uVar4) &&
                 ((int)uVar4 < (int)*(short *)(*(long *)(lVar11 + 0x30) + 0x46))) {
                plVar3 = (long *)(lVar11 + 0x88) + *(uint *)(lVar11 + 0x80);
                if (1 < *(uint *)(lVar11 + 0x80)) {
                  plVar3 = (long *)(lVar11 + 0x88);
                }
                lVar11 = *plVar3;
                if ((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) {
                  if (*(uint *)(lVar11 + 0x30) <= uVar4) {
                    uVar4 = 0;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + (ulong)uVar4 * 8);
                  if (lVar11 != 0) {
                    *(undefined4 *)(lVar11 + 0x24) = uVar8;
                  }
                }
              }
            }
          }
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          uVar12 = (**(code **)*plVar13)(plVar13,puVar5);
          if ((uVar12 & 1) != 0) {
            *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
          }
        }
        else {
          (**(code **)(local_b8 + 0x18))(&local_b8);
          puVar7 = local_b0;
          (**(code **)(**(long **)(param_1 + 0xd0) + 0xe8))
                    (*(long **)(param_1 + 0xd0),plVar13,local_b0,0xffffffff);
          uVar8 = (**(code **)(*plVar13 + 0x38))(plVar13);
          uVar4 = *(uint *)((long)plVar13 + 0xc);
          lVar11 = *(long *)(param_1 + 8);
          if (((lVar11 != 0) && (*(char *)(param_1 + 0x18) != '\0')) &&
             (lVar10 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x30) + 0x18) + 0x20))(),
             *(char *)(lVar10 + 0x78) != '\0')) {
            if (*(char *)(lVar10 + 0x79) == '\0') {
              plVar3 = (long *)(lVar11 + 0x88) + *(uint *)(lVar11 + 0x80);
              if (1 < *(uint *)(lVar11 + 0x80)) {
                plVar3 = (long *)(lVar11 + 0x88);
              }
              lVar10 = *plVar3;
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
                uVar2 = uVar4;
                if (*(uint *)(lVar10 + 0x30) <= uVar4) {
                  uVar2 = 0;
                }
                if (*(long *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar2 * 8) != 0)
                goto LAB_03c569f8;
              }
            }
            else {
LAB_03c569f8:
              FUN_03bf2214(lVar11 + 0x80,puVar7,uVar8,uVar4);
            }
          }
          lVar11 = *(long *)(param_1 + 0x10);
          if (((lVar11 != 0) && (*(char *)(param_1 + 0x19) != '\0')) &&
             (lVar10 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x30) + 0x18) + 0x20))(),
             *(char *)(lVar10 + 0x78) != '\0')) {
            if (*(char *)(lVar10 + 0x79) == '\0') {
              plVar3 = (long *)(lVar11 + 0x88) + *(uint *)(lVar11 + 0x80);
              if (1 < *(uint *)(lVar11 + 0x80)) {
                plVar3 = (long *)(lVar11 + 0x88);
              }
              lVar10 = *plVar3;
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
                uVar2 = uVar4;
                if (*(uint *)(lVar10 + 0x30) <= uVar4) {
                  uVar2 = 0;
                }
                if (*(long *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar2 * 8) != 0)
                goto LAB_03c5690c;
              }
            }
            else {
LAB_03c5690c:
              FUN_03bf2214(lVar11 + 0x80,puVar7,uVar8,uVar4);
            }
          }
          (**(code **)(**(long **)(param_1 + 0xd0) + 0xf0))(*(long **)(param_1 + 0xd0),plVar13);
        }
        lVar11 = *(long *)(param_1 + 0xd0);
        uVar14 = uVar14 + 1;
        uVar12 = (ulong)*(int *)(lVar11 + 0x18);
      } while ((long)uVar14 < (long)uVar12);
    }
  }
  return;
}

