
uint FUN_0068bd20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  ushort *puVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined1 local_40 [16];
  undefined1 auStack_30 [8];
  long local_28;
  long local_8;
  
  local_40 = FUN_0068adb0(param_1,&local_8,&local_28,auStack_30,0,param_3);
  pcVar6 = local_40._0_8_;
  if (local_8 == 0) {
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = FUN_0068a880(local_28,param_2,local_40);
    }
    return uVar4 & 1;
  }
  lVar8 = *(long *)(local_8 + 8);
  uVar11 = (ulong)*(ushort *)(lVar8 + 0xc);
  puVar9 = (uint *)((int *)(lVar8 + 8) + uVar11 * 4);
  uVar5 = local_40._8_4_;
  uVar4 = *puVar9;
  if (*(int *)(lVar8 + 8) < (int)*puVar9) {
    do {
      if ((uint)((int)uVar4 >> 3) < uVar5) {
        uVar10 = (ulong)((byte)pcVar6[(int)(uVar5 + ~((int)uVar4 >> 3))] >> ((ulong)uVar4 & 7)) & 1;
      }
      else {
        uVar10 = 0;
      }
      uVar11 = (ulong)*(ushort *)(lVar8 + 8 + uVar11 * 0x10 + uVar10 * 2 + 4);
      puVar9 = (uint *)(lVar8 + 8 + uVar11 * 0x10);
      bVar1 = (int)uVar4 < (int)*puVar9;
      uVar4 = *puVar9;
    } while (bVar1);
  }
  if (uVar5 == **(ushort **)(puVar9 + 2)) {
    if (0 < (int)uVar5) {
      puVar7 = *(ushort **)(puVar9 + 2) + 1;
      iVar12 = uVar5 + 1;
      do {
        cVar2 = *pcVar6;
        if (cVar2 == '\0' || cVar2 != (char)*puVar7) {
          if (cVar2 != (char)*puVar7) {
            return 0;
          }
          break;
        }
        iVar12 = iVar12 + -1;
        pcVar6 = pcVar6 + 1;
        puVar7 = (ushort *)((long)puVar7 + 1);
      } while (1 < iVar12);
    }
    uVar11 = (long)puVar9 + (-0x18 - lVar8);
    if ((((uVar11 ^ 0xffffffffffffffff) & 0xffffffff0) != 0) &&
       (pcVar6 = *(char **)(local_8 + (long)(int)(uVar11 >> 4) * 8 + 0x10), *pcVar6 == '\x05')) {
      puVar7 = *(ushort **)(pcVar6 + 0x10);
      uVar3 = *puVar7;
      *param_2 = puVar7 + 1;
      *(uint *)(param_2 + 1) = (uint)uVar3;
      return 1;
    }
  }
  return 0;
}

