
void FUN_027052b0(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  long lVar7;
  
  FUN_026fdf90();
  *(byte *)(param_1 + 0x50c) = *(byte *)(param_1 + 0x50c) & 0xfc;
  FUN_02700970(param_1);
  lVar7 = *(long *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x50d) = *(byte *)(param_1 + 0x50d) & 0xfc;
  if (lVar7 == 0) {
    *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) & 0xfc;
LAB_02705424:
    *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) & 0xfc;
  }
  else {
    if (*(long **)(lVar7 + 400) == (long *)0x0) {
      *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) & 0xfc;
    }
    else {
      lVar1 = (**(code **)(**(long **)(lVar7 + 400) + 0x48))();
      uVar3 = *(uint *)(param_1 + 0x128);
      if (0 < (int)uVar3) {
        plVar2 = *(long **)(param_1 + 0x130);
        sVar6 = (long)(int)uVar3 * 8;
        uVar5 = 0;
        do {
          sVar6 = sVar6 - 8;
          if (*plVar2 == lVar1) {
            iVar4 = (int)uVar5;
            if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
              if (iVar4 + 1 < (int)uVar3) {
                memmove(plVar2,plVar2 + 1,sVar6);
                uVar3 = *(uint *)(param_1 + 0x128);
              }
              *(uint *)(param_1 + 0x128) = uVar3 - 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          plVar2 = plVar2 + 1;
        } while (uVar3 != uVar5);
      }
      if (*(long **)(lVar7 + 400) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + 400) + 8))();
      }
      *(undefined8 *)(lVar7 + 400) = 0;
      lVar7 = *(long *)(param_1 + 0x10);
      *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) & 0xfc;
      if (lVar7 == 0) goto LAB_02705424;
    }
    if (*(long **)(lVar7 + 0x198) == (long *)0x0) {
      *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) & 0xfc;
    }
    else {
      lVar1 = (**(code **)(**(long **)(lVar7 + 0x198) + 0x48))();
      uVar3 = *(uint *)(param_1 + 0x128);
      if (0 < (int)uVar3) {
        plVar2 = *(long **)(param_1 + 0x130);
        sVar6 = (long)(int)uVar3 * 8;
        uVar5 = 0;
        do {
          sVar6 = sVar6 - 8;
          if (*plVar2 == lVar1) {
            iVar4 = (int)uVar5;
            if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
              if (iVar4 + 1 < (int)uVar3) {
                memmove(plVar2,plVar2 + 1,sVar6);
                uVar3 = *(uint *)(param_1 + 0x128);
              }
              *(uint *)(param_1 + 0x128) = uVar3 - 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          plVar2 = plVar2 + 1;
        } while (uVar3 != uVar5);
      }
      if (*(long **)(lVar7 + 0x198) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + 0x198) + 8))();
      }
      *(undefined8 *)(lVar7 + 0x198) = 0;
      lVar7 = *(long *)(param_1 + 0x10);
      *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) & 0xfc;
      if (lVar7 == 0) goto LAB_0270553c;
    }
    if (*(long **)(lVar7 + 0x1a0) != (long *)0x0) {
      lVar1 = (**(code **)(**(long **)(lVar7 + 0x1a0) + 0x48))();
      uVar3 = *(uint *)(param_1 + 0x128);
      if (0 < (int)uVar3) {
        plVar2 = *(long **)(param_1 + 0x130);
        sVar6 = (long)(int)uVar3 * 8;
        uVar5 = 0;
        do {
          sVar6 = sVar6 - 8;
          if (*plVar2 == lVar1) {
            iVar4 = (int)uVar5;
            if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
              if (iVar4 + 1 < (int)uVar3) {
                memmove(plVar2,plVar2 + 1,sVar6);
                uVar3 = *(uint *)(param_1 + 0x128);
              }
              *(uint *)(param_1 + 0x128) = uVar3 - 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          plVar2 = plVar2 + 1;
        } while (uVar3 != uVar5);
      }
      if (*(long **)(lVar7 + 0x1a0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + 0x1a0) + 8))();
      }
      *(undefined8 *)(lVar7 + 0x1a0) = 0;
    }
  }
LAB_0270553c:
  *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) & 0xfc;
  return;
}

