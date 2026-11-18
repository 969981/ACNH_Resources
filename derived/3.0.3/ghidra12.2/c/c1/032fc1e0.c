
void FUN_032fc1e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort local_40a [501];
  
  if (*(char *)(param_1 + 0x484) != '\0') {
    lVar7 = *(long *)(param_1 + 0x468);
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x480) = 0;
    iVar4 = 0x1f5;
    do {
      uVar3 = *(ushort *)(lVar7 + lVar5 * 2);
      if ((uVar3 + 0x1f94 & 0xffff) < 4) {
        local_40a[lVar5] = (ushort)(0xe06f000c000d0009 >> (((ulong)(uVar3 + 0x1f94) & 3) << 4));
      }
      else {
        local_40a[lVar5] = uVar3;
        if (uVar3 == 0) {
          iVar4 = (int)lVar5;
          break;
        }
      }
      lVar5 = lVar5 + 1;
      *(int *)(param_1 + 0x480) = (int)lVar5;
    } while (lVar5 != 0x1f5);
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x16409) == '\0') {
      memcpy(*(char **)(param_1 + 0x478),local_40a,0x3ea);
    }
    else {
      nn::util::ConvertStringUtf16NativeToUtf8
                (*(char **)(param_1 + 0x478),0x3ea,local_40a,iVar4 * 2 + 2);
    }
    *(undefined1 *)(param_1 + 0x484) = 0;
  }
  if ((*(char *)(*(long *)(param_1 + 0x20) + 0x16409) != '\0') &&
     (uVar1 = *(int *)(param_1 + 0x480) * 4 + 4, 0 < (int)uVar1)) {
    uVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x478) + uVar6) == '\0') {
        return;
      }
      uVar2 = uVar6 + 2;
      if (*(char *)(*(long *)(param_1 + 0x478) + uVar6 + 1) == '\0') {
        return;
      }
      uVar6 = uVar2;
    } while (uVar1 != uVar2);
  }
  return;
}

