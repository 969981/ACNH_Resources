
void FUN_03fe9e70(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  char cVar10;
  int iVar11;
  
  puVar5 = PTR_PTR_04bdf248;
  puVar4 = PTR_DAT_04bdf208;
  iVar8 = *(int *)((long)param_1 + 0x34e0bc);
  iVar11 = (int)param_1[0x69c16];
  if (iVar11 < iVar8) {
    cVar10 = (char)param_1[0x68e2];
    plVar1 = param_1 + 1;
    do {
      if (cVar10 != '\0') {
        iVar11 = iVar8;
      }
      if (*(int *)((long)param_1 + 0x54) <= iVar11) {
        do {
          uVar2 = *(ushort *)(param_1 + 0xb);
          uVar9 = (ulong)uVar2;
          uVar7 = (uint)uVar2;
          *(ushort *)(param_1 + 0xb) = uVar2 + 1;
          if (uVar2 >> 6 < 0x3ff || *(char *)((long)param_1 + 0x45) == '\0') {
            if (uVar7 - 0xfd < 3) {
              uVar6 = (ulong)*(byte *)((long)plVar1 + uVar9 + 0x58);
              *(undefined1 *)((long)plVar1 + uVar9 + 0x58) = 0;
            }
            else if (uVar7 == 0xf3) {
              uVar6 = FUN_03f855f0(param_1 + 0x200c,*(byte *)((long)param_1 + 0x152) & 0x7f);
            }
            else {
              uVar6 = (ulong)*(byte *)((long)plVar1 + uVar9 + 0x58);
            }
          }
          else {
            uVar6 = (ulong)(byte)puVar4[uVar7 - 0xffc0];
          }
          (**(code **)(puVar5 + (uVar6 & 0xff) * 0x10))(plVar1);
        } while (*(int *)((long)param_1 + 0x54) <= iVar11);
        cVar10 = (char)param_1[0x68e2];
      }
      if (((cVar10 != '\0') && (*(char *)((long)param_1 + 0x3469a) == '\0')) &&
         ((int)param_1[0x40ce] < *(int *)((long)param_1 + 0x34e0bc))) {
        *(int *)(param_1 + 0x40ce) = *(int *)((long)param_1 + 0x34e0bc);
      }
      FUN_03fe7b90(param_1);
      iVar8 = *(int *)((long)param_1 + 0x34e0bc);
      cVar10 = (char)param_1[0x68e2];
      iVar11 = iVar8;
      if (cVar10 != '\0') {
        iVar11 = *(int *)(*param_1 + 0x28);
        iVar3 = 0;
        if (iVar11 != 0) {
          iVar3 = iVar8 / iVar11;
        }
        iVar11 = iVar8 - iVar3 * iVar11;
      }
      *(int *)(param_1 + 0x69c18) = iVar11;
      iVar11 = (int)param_1[0x69c16];
    } while (iVar11 < iVar8);
  }
  *(int *)(param_1 + 0x69c18) = iVar8;
  return;
}

