
int FUN_03b69170(long param_1,void *param_2,ulong param_3,int param_4,int param_5)

{
  int iVar1;
  void *__src;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  size_t __n;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) == 6) {
    uVar4 = param_5 % 0xe;
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 1;
      if ((uVar4 & 1) != 0) {
        lVar5 = 2;
      }
      lVar5 = lVar5 + ((int)((uVar4 + ((uVar4 & 0x80) >> 7)) * 0x1000000) >> 0x19);
    }
    uVar8 = lVar5 + (long)(param_5 / 0xe) * 8;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 2) goto LAB_03b69238;
    lVar5 = nn::audio::GetSampleByteSize(2);
    uVar8 = lVar5 * param_5;
  }
  if (param_3 < uVar8) {
    return 0;
  }
LAB_03b69238:
  if (*(char *)(param_1 + 0x84) == '\0') {
    lVar5 = *(long *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x60) < 1) {
      lVar5 = 0;
    }
    lVar7 = 0;
    if (lVar5 != 0) {
      lVar7 = lVar5 - *(int *)(param_1 + 100);
    }
    iVar11 = *(int *)(lVar7 + 0x1c);
    iVar3 = iVar11 - param_4;
    if (param_5 <= iVar11 - param_4) {
      iVar3 = param_5;
    }
    iVar9 = *(int *)(param_1 + 0x20);
    if (iVar9 == 6) {
      uVar4 = iVar3 % 0xe;
      if (uVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = 1;
        if ((uVar4 & 1) != 0) {
          lVar5 = 2;
        }
        lVar5 = lVar5 + ((int)((uVar4 + ((uVar4 & 0x80) >> 7)) * 0x1000000) >> 0x19);
      }
      __n = lVar5 + (long)(iVar3 / 0xe) * 8;
      iVar9 = 6;
    }
    else if (iVar9 == 2) {
      lVar5 = nn::audio::GetSampleByteSize(2);
      iVar9 = *(int *)(param_1 + 0x20);
      __n = lVar5 * iVar3;
      iVar11 = *(int *)(lVar7 + 0x1c);
    }
    else {
      __n = 0;
    }
    if (param_4 < *(int *)(lVar7 + 0x18)) {
      return 0;
    }
    if (iVar11 <= param_4) {
      return 0;
    }
    iVar1 = iVar3 + param_4;
    if (iVar1 <= *(int *)(lVar7 + 0x18)) {
      return 0;
    }
    if (iVar11 < iVar1) {
      return 0;
    }
    if ((*(byte *)(lVar7 + 0x20) & 1) == 0) {
      lVar5 = (long)param_4 - (long)*(int *)(lVar7 + 0x18);
      if (iVar9 == 6) {
        iVar11 = (int)lVar5;
        uVar4 = iVar11 % 0xe;
        if (uVar4 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 1;
          if ((uVar4 & 1) != 0) {
            lVar6 = 2;
          }
          lVar6 = lVar6 + ((int)((uVar4 + ((uVar4 & 0x80) >> 7)) * 0x1000000) >> 0x19);
        }
        lVar6 = lVar6 + (long)(iVar11 / 0xe) * 8;
      }
      else if (iVar9 == 2) {
        lVar6 = nn::audio::GetSampleByteSize(2);
        lVar6 = lVar6 * lVar5;
      }
      else {
        lVar6 = 0;
      }
      __src = (void *)(*(long *)(lVar7 + 8) + lVar6);
      if (__src != (void *)0x0) {
        memcpy(param_2,__src,__n);
        if (*(int *)(lVar7 + 0x1c) <= iVar1) {
          lVar7 = FUN_038aaa20(param_1 + 0x50);
          lVar5 = 0;
          if (lVar7 != 0) {
            lVar5 = lVar7 - *(int *)(param_1 + 100);
          }
          *(undefined8 *)(lVar5 + 0x18) = 0;
          plVar10 = (long *)(param_1 + 0x68);
          lVar7 = *plVar10;
          plVar2 = (long *)(lVar5 + *(int *)(param_1 + 0x7c));
          *plVar10 = (long)plVar2;
          *plVar2 = lVar7;
          plVar2[1] = (long)plVar10;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 8) = plVar2;
          }
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
          if ((*(byte *)(lVar5 + 0x21) & 1) != 0) {
            *(undefined1 *)(param_1 + 0x84) = 1;
          }
        }
        return iVar3;
      }
    }
  }
  return 0;
}

