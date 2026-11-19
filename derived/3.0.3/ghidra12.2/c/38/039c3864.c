
undefined4 FUN_039c3864(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  
  iVar4 = param_2 << 3;
  lVar8 = *(long *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0x1f0) == 1) {
    uVar5 = (param_2 & 0x1fffffff) << 2;
    uVar2 = *(uint *)(lVar8 + (ulong)uVar5 * 4);
    uVar1 = uVar2 & 0xffff;
    if (uVar1 != 0xfff5) {
      if (uVar1 == 0xfff6) {
        return 0xfffffffd;
      }
      uVar2 = uVar2 >> 0x10;
      if (uVar2 != 0xfff5) {
        if (uVar2 == 0xfff6) {
          return 0xfffffffd;
        }
        uVar2 = *(uint *)(lVar8 + (ulong)(uVar5 | 1) * 4);
        uVar1 = uVar2 & 0xffff;
        if (uVar1 != 0xfff5) {
          if (uVar1 == 0xfff6) {
            return 0xfffffffd;
          }
          uVar2 = uVar2 >> 0x10;
          if (uVar2 != 0xfff5) {
            if (uVar2 == 0xfff6) {
              return 0xfffffffd;
            }
            uVar2 = *(uint *)(lVar8 + (ulong)(uVar5 | 2) * 4);
            uVar1 = uVar2 & 0xffff;
            if (uVar1 != 0xfff5) {
              if (uVar1 == 0xfff6) {
                return 0xfffffffd;
              }
              uVar2 = uVar2 >> 0x10;
              if (uVar2 != 0xfff5) {
                if (uVar2 == 0xfff6) {
                  return 0xfffffffd;
                }
                uVar2 = *(uint *)(lVar8 + (ulong)(uVar5 | 3) * 4);
                uVar1 = uVar2 & 0xffff;
                if (uVar1 != 0xfff5) {
                  if (uVar1 == 0xfff6) {
                    return 0xfffffffd;
                  }
                  uVar2 = uVar2 >> 0x10;
                  if (uVar2 == 0xfff6) {
                    return 0xfffffffd;
                  }
                  bVar6 = uVar2 == 0xfff5;
LAB_039c3a8c:
                  uVar7 = 0xfffffffe;
                  if (!bVar6) {
                    uVar7 = 0;
                  }
                  return uVar7;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(lVar8 + (long)iVar4 * 4);
    if (iVar3 != -0xb) {
      if (iVar3 == -10) {
        return 0xfffffffd;
      }
      uVar9 = (long)iVar4 << 2;
      iVar3 = *(int *)(lVar8 + (uVar9 | 4));
      if (iVar3 != -0xb) {
        if (iVar3 == -10) {
          return 0xfffffffd;
        }
        iVar3 = *(int *)(lVar8 + (uVar9 | 8));
        if (iVar3 != -0xb) {
          if (iVar3 == -10) {
            return 0xfffffffd;
          }
          iVar3 = *(int *)(lVar8 + (uVar9 | 0xc));
          if (iVar3 != -0xb) {
            if (iVar3 == -10) {
              return 0xfffffffd;
            }
            iVar3 = *(int *)(lVar8 + (uVar9 | 0x10));
            if (iVar3 != -0xb) {
              if (iVar3 == -10) {
                return 0xfffffffd;
              }
              iVar4 = *(int *)(lVar8 + ((long)iVar4 << 2 | 0x14U));
              if (iVar4 != -0xb) {
                if (iVar4 == -10) {
                  return 0xfffffffd;
                }
                iVar4 = *(int *)(lVar8 + (uVar9 | 0x18));
                if (iVar4 != -0xb) {
                  if (iVar4 == -10) {
                    return 0xfffffffd;
                  }
                  iVar4 = *(int *)(lVar8 + (uVar9 | 0x1c));
                  if (iVar4 == -10) {
                    return 0xfffffffd;
                  }
                  bVar6 = iVar4 == -0xb;
                  goto LAB_039c3a8c;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xfffffffe;
}

