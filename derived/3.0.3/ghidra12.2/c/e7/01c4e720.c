
void FUN_01c4e720(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined **local_30;
  char *pcStack_28;
  
  puVar6 = *(uint **)(param_2 + 8);
  uVar5 = 0;
  if (puVar6 != (uint *)0x0) {
    uVar5 = *puVar6;
    if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
      if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_0534e360) &&
             (uVar3 = *(ushort *)(DAT_0534e368 + (long)(int)uVar2 * 2), uVar5 = (uint)uVar3,
             uVar3 < 2)) goto LAB_01c4e7c4;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01c4e7c4:
  local_30 = (undefined **)CONCAT44(local_30._4_4_,uVar5);
  if (uVar5 == 1) {
    pcStack_28 = (char *)FUN_01c559a0(param_2);
    local_30 = &PTR_LAB_048f9770;
    if ((*pcStack_28 != '\0') &&
       (iVar4 = FUN_0274bce0(*(undefined8 *)(param_1 + 0x10),&local_30), iVar4 == 0)) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
  }
  return;
}

