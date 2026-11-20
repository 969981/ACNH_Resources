
void FUN_03f5c040(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  
  puVar8 = PTR_DAT_04bdf208;
  pcVar4 = (code *)param_1[0x7979d];
  uVar5 = param_1[0x7979e];
  plVar3 = (long *)((long)param_1 + ((long)uVar5 >> 1));
  iVar10 = *(int *)((long)param_1 + 0x34e0bc);
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 0x69720;
  do {
    if (*(int *)((long)param_1 + 0x54) <= iVar10) {
      do {
        uVar7 = *(ushort *)(param_1 + 0xb);
        uVar13 = (ulong)uVar7;
        uVar11 = (uint)uVar7;
        *(ushort *)(param_1 + 0xb) = uVar7 + 1;
        if (uVar7 >> 6 < 0x3ff || *(char *)((long)param_1 + 0x45) == '\0') {
          if (uVar11 - 0xfd < 3) {
            uVar9 = (ulong)*(byte *)((long)plVar1 + uVar13 + 0x58);
            *(undefined1 *)((long)plVar1 + uVar13 + 0x58) = 0;
          }
          else if (uVar11 == 0xf3) {
            uVar9 = FUN_03f855f0(param_1 + 0x200c,*(byte *)((long)param_1 + 0x152) & 0x7f);
          }
          else {
            uVar9 = (ulong)*(byte *)((long)plVar1 + uVar13 + 0x58);
          }
        }
        else {
          uVar9 = (ulong)(byte)puVar8[uVar11 - 0xffc0];
        }
        (*(code *)(&PTR_LAB_04baaa50)[(uVar9 & 0xff) * 2])(plVar1);
      } while (*(int *)((long)param_1 + 0x54) <= *(int *)((long)param_1 + 0x34e0bc));
    }
    if ((char)param_1[0x71489] != '\0') {
      FUN_03f5b4a4(param_1);
    }
    pcVar12 = pcVar4;
    if ((uVar5 & 1) != 0) {
      pcVar12 = *(code **)(pcVar4 + *plVar3);
    }
    (*pcVar12)(plVar3);
    FUN_03f53408(plVar2);
    FUN_03f53408(plVar2);
    FUN_03f53408(plVar2);
    FUN_03f53408(plVar2);
    FUN_03f53408(plVar2);
    FUN_03f53408(plVar2);
    iVar6 = (int)param_1[0x69c16];
    iVar10 = *(int *)((long)param_1 + 0x34e0bc);
    if (*(char *)(*param_1 + 0x10) == '\0') {
      if (iVar6 <= iVar10) {
        FUN_03fe7b90(param_1);
        iVar10 = *(int *)((long)param_1 + 0x34e0bc);
      }
    }
    else if (iVar6 <= iVar10) {
      do {
        FUN_03fe7b90(param_1);
        iVar10 = *(int *)((long)param_1 + 0x34e0bc);
      } while ((int)param_1[0x69c16] <= iVar10);
    }
    *(int *)(param_1 + 0x69c18) = iVar10;
  } while (*(char *)((long)param_1 + 0x38a459) == '\0');
  return;
}

