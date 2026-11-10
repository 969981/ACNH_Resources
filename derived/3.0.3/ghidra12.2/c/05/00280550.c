
void FUN_00280550(undefined8 param_1,undefined8 *param_2,ushort param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulong __n;
  ulong uVar15;
  ulong uVar16;
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_54;
  
  uVar1 = (uint)param_3;
  uVar15 = (ulong)uVar1;
  if (uVar1 - 0x21 < 0xffffffe0) {
    local_70 = 0x10c07;
    goto LAB_00280974;
  }
  uVar2 = uVar1 * uVar1;
  __n = (ulong)uVar2;
  uVar4 = FUN_0021f454();
  pvVar5 = (void *)FUN_00285d10(__n << 1,uVar4);
  if (pvVar5 == (void *)0x0) {
    *param_2 = 0;
  }
  else {
    uVar16 = __n - 1;
    uVar7 = __n & 1;
    if (uVar16 < 3) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      lVar6 = (long)pvVar5 + 4;
      do {
        lVar8 = lVar8 + -4;
        *(undefined8 *)(lVar6 + -4) = 0;
        lVar6 = lVar6 + 8;
      } while (-lVar8 != (__n & 0x7ffffffc));
      lVar8 = -lVar8;
    }
    if ((uVar2 & 1) != 0) {
      puVar9 = (undefined2 *)((long)pvVar5 + lVar8 * 2);
      do {
        uVar7 = uVar7 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar7 != 0);
    }
    *param_2 = pvVar5;
    memset(pvVar5,0,__n << 1);
    uVar4 = FUN_0021f454();
    lVar6 = FUN_00285d10(__n,uVar4);
    if (lVar6 == 0) {
      param_2[1] = 0;
    }
    else {
      uVar7 = __n & 1;
      if (uVar16 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(undefined4 *)(lVar6 + uVar10) = 0;
          uVar10 = uVar10 + 4;
        } while ((__n & 0x7ffffffc) != uVar10);
      }
      if ((uVar2 & 1) != 0) {
        puVar13 = (undefined1 *)(lVar6 + uVar10);
        do {
          uVar7 = uVar7 - 1;
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        } while (uVar7 != 0);
      }
      param_2[1] = lVar6;
      if (param_3 == 0) {
        uVar15 = 0;
        uVar4 = FUN_0021f454();
        pvVar5 = (void *)FUN_00285d10(0,uVar4);
      }
      else {
        lVar6 = 0;
        uVar7 = 0;
        do {
          uVar3 = (undefined1)uVar7;
          if (uVar1 < 4) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              lVar8 = lVar6 + uVar10;
              *(undefined1 *)(param_2[1] + lVar6 + uVar10) = uVar3;
              uVar10 = uVar10 + 4;
              *(undefined1 *)(param_2[1] + lVar8 + 1) = uVar3;
              *(undefined1 *)(param_2[1] + lVar8 + 2) = uVar3;
              *(undefined1 *)(param_2[1] + lVar8 + 3) = uVar3;
            } while ((uVar15 & 0xfffc) != uVar10);
          }
          if ((param_3 & 3) != 0) {
            lVar8 = uVar10 + lVar6;
            uVar10 = uVar15 & 3;
            do {
              uVar10 = uVar10 - 1;
              *(undefined1 *)(param_2[1] + lVar8) = uVar3;
              lVar8 = lVar8 + 1;
            } while (uVar10 != 0);
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + uVar15;
        } while (uVar7 != uVar15);
        uVar4 = FUN_0021f454();
        pvVar5 = (void *)FUN_00285d10(uVar15,uVar4);
      }
      if (pvVar5 == (void *)0x0) {
        param_2[2] = 0;
      }
      else {
        uVar10 = uVar15 - 1;
        uVar7 = uVar15 & 3;
        if (uVar10 < 3) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            *(undefined4 *)((long)pvVar5 + uVar11) = 0;
            uVar11 = uVar11 + 4;
          } while ((uVar15 & 0xfffc) != uVar11);
        }
        if (uVar7 != 0) {
          puVar13 = (undefined1 *)((long)pvVar5 + uVar11);
          do {
            uVar7 = uVar7 - 1;
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          } while (uVar7 != 0);
        }
        param_2[2] = pvVar5;
        memset(pvVar5,0,uVar15);
        uVar4 = FUN_0021f454();
        pvVar5 = (void *)FUN_00285d10(uVar15 << 2,uVar4);
        if (pvVar5 == (void *)0x0) {
          param_2[3] = 0;
        }
        else {
          uVar7 = uVar15 & 3;
          if (uVar10 < 3) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            puVar14 = (undefined8 *)((long)pvVar5 + 8);
            do {
              lVar6 = lVar6 + -4;
              puVar14[-1] = 0;
              *puVar14 = 0;
              puVar14 = puVar14 + 2;
            } while (-lVar6 != (uVar15 & 0xfffc));
            lVar6 = -lVar6;
          }
          if (uVar7 != 0) {
            puVar12 = (undefined4 *)((long)pvVar5 + lVar6 * 4);
            do {
              uVar7 = uVar7 - 1;
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            } while (uVar7 != 0);
          }
          param_2[3] = pvVar5;
          memset(pvVar5,0,uVar15 << 2);
          *(byte *)((long)param_2 + 0x4c) = param_4 & 1;
          if ((param_4 & 1) != 0) {
            uVar4 = FUN_0021f454();
            pvVar5 = (void *)FUN_00285d10(__n,uVar4);
            if (pvVar5 == (void *)0x0) {
              param_2[4] = 0;
              goto LAB_00280968;
            }
            uVar7 = __n & 1;
            if (uVar16 < 3) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              do {
                *(undefined4 *)((long)pvVar5 + uVar11) = 0;
                uVar11 = uVar11 + 4;
              } while ((__n & 0x7ffffffc) != uVar11);
            }
            if ((uVar2 & 1) != 0) {
              puVar13 = (undefined1 *)((long)pvVar5 + uVar11);
              do {
                uVar7 = uVar7 - 1;
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
              } while (uVar7 != 0);
            }
            param_2[4] = pvVar5;
            memset(pvVar5,0,__n);
          }
          uVar4 = FUN_0021f454();
          pvVar5 = (void *)FUN_00285d10(uVar15,uVar4);
          if (pvVar5 == (void *)0x0) {
            param_2[5] = 0;
          }
          else {
            uVar7 = uVar15 & 3;
            if (uVar10 < 3) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              do {
                *(undefined4 *)((long)pvVar5 + uVar10) = 0;
                uVar10 = uVar10 + 4;
              } while ((uVar15 & 0xfffc) != uVar10);
            }
            if (uVar7 != 0) {
              puVar13 = (undefined1 *)((long)pvVar5 + uVar10);
              do {
                uVar7 = uVar7 - 1;
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
              } while (uVar7 != 0);
            }
            param_2[5] = pvVar5;
            memset(pvVar5,0,uVar15);
            uVar4 = FUN_0021f454();
            pvVar5 = (void *)FUN_00285d10(__n,uVar4);
            if (pvVar5 != (void *)0x0) {
              uVar15 = __n & 1;
              if (uVar16 < 3) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                do {
                  *(undefined4 *)((long)pvVar5 + uVar7) = 0;
                  uVar7 = uVar7 + 4;
                } while ((__n & 0x7ffffffc) != uVar7);
              }
              if ((uVar2 & 1) != 0) {
                puVar13 = (undefined1 *)((long)pvVar5 + uVar7);
                do {
                  uVar15 = uVar15 - 1;
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                } while (uVar15 != 0);
              }
              param_2[10] = pvVar5;
              memcpy(pvVar5,(void *)param_2[1],__n);
              *(ushort *)((long)param_2 + 0x3c) = param_3;
              local_70 = 0;
              goto LAB_00280974;
            }
            param_2[10] = 0;
          }
        }
      }
    }
  }
LAB_00280968:
  local_70 = 0x10c01;
LAB_00280974:
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_54);
  FUN_002296c4(param_1,&local_70);
  return;
}

