
bool FUN_01629580(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 != 0) {
    pcVar9 = (char *)param_2[1];
    if (pcVar9 == (char *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen(pcVar9);
    }
    uVar6 = (ulong)*(ushort *)(lVar11 + 0xc);
    puVar12 = (uint *)((int *)(lVar11 + 8) + uVar6 * 4);
    uVar2 = *puVar12;
    if (*(int *)(lVar11 + 8) < (int)*puVar12) {
      do {
        uVar8 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar8 < sVar5) {
          uVar8 = (ulong)((byte)pcVar9[sVar5 + ~uVar8] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar8 = 0;
        }
        uVar6 = (ulong)*(ushort *)(lVar11 + 8 + uVar6 * 0x10 + uVar8 * 2 + 4);
        puVar12 = (uint *)(lVar11 + 8 + uVar6 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar12;
        uVar2 = *puVar12;
      } while (bVar1);
    }
    if ((((sVar5 == **(ushort **)(puVar12 + 2)) &&
         (iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,pcVar9,sVar5), iVar4 == 0)) &&
        (uVar6 = (long)puVar12 + (-0x18 - lVar11), ((uVar6 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
        )) && (*(long *)(param_1 + 0x10) != 0)) {
      puVar7 = (undefined *)
               **(undefined8 **)(*(long *)(param_1 + 0x10) + (long)(int)(uVar6 >> 4) * 0x18 + 8);
      if (puVar7 == &UNK_040d3197) {
        return false;
      }
      cVar3 = puVar7[2];
      goto joined_r0x01629768;
    }
  }
  lVar11 = *(long *)(param_1 + 0x20);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 != 0) {
    pcVar9 = (char *)param_2[1];
    if (pcVar9 == (char *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen(pcVar9);
    }
    uVar6 = (ulong)*(ushort *)(lVar10 + 0xc);
    puVar12 = (uint *)((int *)(lVar10 + 8) + uVar6 * 4);
    uVar2 = *puVar12;
    if (*(int *)(lVar10 + 8) < (int)*puVar12) {
      do {
        uVar8 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar8 < sVar5) {
          uVar8 = (ulong)((byte)pcVar9[sVar5 + ~uVar8] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar8 = 0;
        }
        uVar6 = (ulong)*(ushort *)(lVar10 + 8 + uVar6 * 0x10 + uVar8 * 2 + 4);
        puVar12 = (uint *)(lVar10 + 8 + uVar6 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar12;
        uVar2 = *puVar12;
      } while (bVar1);
    }
    if (((sVar5 == **(ushort **)(puVar12 + 2)) &&
        (iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,pcVar9,sVar5), iVar4 == 0)) &&
       (uVar6 = (long)puVar12 + (-0x18 - lVar10), ((uVar6 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)
       ) {
      puVar7 = *(undefined **)(*(long *)(lVar11 + 0x30) + (long)(int)(uVar6 >> 4) * 8);
      if (puVar7 + 2 != "0") {
        cVar3 = puVar7[2];
joined_r0x01629768:
        if (cVar3 == '0') {
          return puVar7[3] != '\0';
        }
        return true;
      }
    }
  }
  return false;
}

