
/* WARNING: Removing unreachable block (ram,0x0170ae94) */

uint FUN_0170acf0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  int local_14;
  
  puVar6 = (uint *)FUN_0171ee68(param_2);
  puVar4 = PTR_DAT_04bbde90;
  puVar3 = PTR_DAT_04bbde88;
  uVar5 = 0;
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 != 0) {
      cVar8 = *PTR_DAT_04bbde88;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          uVar5 = *puVar6;
        }
        else {
          uVar5 = *(uint *)(puVar4 + 0x28);
          if (-1 < (int)uVar5) {
            if ((((byte *)((ulong)uVar5 + (long)puVar6) != (byte *)0x0) &&
                ((*(byte *)((ulong)uVar5 + (long)puVar6) >> 3 & 1) != 0)) &&
               ((*(uint *)(param_1 + 0x15f4) >> 3 & 1) == 0)) goto LAB_0170aeb4;
            break;
          }
          if (uVar5 != 0xffffffff) break;
          uVar5 = *puVar6;
        }
        if ((uVar5 == 0) || (puVar9 = (uint *)(ulong)uVar5, puVar6 == puVar9)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
        if (uVar7 == 0) break;
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x45e66210) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_0170ae58;
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x28) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0170ae58:
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x1138) != 0)) {
      local_14 = 0x16;
      uVar7 = FUN_03850a90(*(long *)(param_1 + 0x1138),0x16,0,*(uint *)(param_1 + 0x1698) >> 1 & 1);
      if ((uVar7 & 1) != 0) {
LAB_0170aeb4:
        uVar5 = 0;
        goto LAB_0170aedc;
      }
    }
    local_14 = 0;
    if (*(int *)(param_1 + 0x5ee4) != 5) {
      local_14 = *(int *)(param_1 + 0x5ee4);
    }
    uVar5 = FUN_0170a950(&local_14,param_2);
  }
LAB_0170aedc:
  return uVar5 & 1;
}

