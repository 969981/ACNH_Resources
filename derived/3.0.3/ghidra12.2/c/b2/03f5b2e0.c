
void FUN_03f5b2e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  ushort uVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  ulong uVar12;
  
  puVar7 = PTR_DAT_04bdf208;
  pcVar3 = (code *)param_1[0x7979d];
  uVar4 = param_1[0x7979e];
  iVar9 = *(int *)((long)param_1 + 0x34e0bc);
  plVar2 = (long *)((long)param_1 + ((long)uVar4 >> 1));
  plVar1 = param_1 + 1;
  do {
    if (*(int *)((long)param_1 + 0x54) <= iVar9) {
      do {
        uVar6 = *(ushort *)(param_1 + 0xb);
        uVar12 = (ulong)uVar6;
        uVar10 = (uint)uVar6;
        *(ushort *)(param_1 + 0xb) = uVar6 + 1;
        if (uVar6 >> 6 < 0x3ff || *(char *)((long)param_1 + 0x45) == '\0') {
          if (uVar10 - 0xfd < 3) {
            uVar8 = (ulong)*(byte *)((long)plVar1 + uVar12 + 0x58);
            *(undefined1 *)((long)plVar1 + uVar12 + 0x58) = 0;
          }
          else if (uVar10 == 0xf3) {
            uVar8 = FUN_03f855f0(param_1 + 0x200c,*(byte *)((long)param_1 + 0x152) & 0x7f);
          }
          else {
            uVar8 = (ulong)*(byte *)((long)plVar1 + uVar12 + 0x58);
          }
        }
        else {
          uVar8 = (ulong)(byte)puVar7[uVar10 - 0xffc0];
        }
        (*(code *)(&PTR_LAB_04baaa50)[(uVar8 & 0xff) * 2])(plVar1);
      } while (*(int *)((long)param_1 + 0x54) <= *(int *)((long)param_1 + 0x34e0bc));
    }
    if ((char)param_1[0x71489] != '\0') {
      FUN_03f5b4a4(param_1);
    }
    pcVar11 = pcVar3;
    if ((uVar4 & 1) != 0) {
      pcVar11 = *(code **)(pcVar3 + *plVar2);
    }
    (*pcVar11)(plVar2);
    iVar5 = (int)param_1[0x69c16];
    iVar9 = *(int *)((long)param_1 + 0x34e0bc);
    if (*(char *)(*param_1 + 0x10) == '\0') {
      if (iVar5 <= iVar9) {
        FUN_03fe7b90(param_1);
        iVar9 = *(int *)((long)param_1 + 0x34e0bc);
      }
    }
    else if (iVar5 <= iVar9) {
      do {
        FUN_03fe7b90(param_1);
        iVar9 = *(int *)((long)param_1 + 0x34e0bc);
      } while ((int)param_1[0x69c16] <= iVar9);
    }
    *(int *)(param_1 + 0x69c18) = iVar9;
  } while (*(char *)((long)param_1 + 0x38a459) == '\0');
  return;
}

