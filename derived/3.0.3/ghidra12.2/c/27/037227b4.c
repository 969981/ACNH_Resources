
void FUN_037227b4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bc3a80;
  puVar2 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  if (((*(byte *)(param_1 + 0x1231) >> 5 & 1) == 0) && (*(int *)(param_1 + 0xe0) != 0)) {
    plVar7 = *(long **)(param_1 + 0xe8);
    lVar8 = (long)*(int *)(param_1 + 0xe0) << 3;
    do {
      lVar9 = *plVar7;
      if ((*(int *)(lVar9 + 0x3c) == 2) && ((*(ushort *)(lVar9 + 0x114) & 1) == 0)) {
        *(ushort *)(lVar9 + 0x114) = *(ushort *)(lVar9 + 0x114) | 8;
        *(undefined4 *)(lVar9 + 0xf0) = *param_2;
        *(undefined4 *)(lVar9 + 0xf4) = param_2[1];
        *(undefined4 *)(lVar9 + 0xf8) = param_2[2];
        *(undefined4 *)(lVar9 + 0xfc) = *param_3;
        lVar6 = *(long *)puVar2;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x330) == 0)) {
          puVar5 = &DAT_055c04a0;
        }
        else {
          puVar5 = (undefined8 *)
                   (**(code **)(**(long **)puVar1 + 0x18))
                             (*(long **)puVar1,*(undefined4 *)(lVar6 + 0x338));
          iVar4 = FUN_006bd550(*puVar5,0);
          puVar5 = (undefined8 *)puVar3;
          if (iVar4 != 0x758f7eaf) {
            puVar5 = &DAT_055c04a0;
          }
        }
        *(undefined4 *)(lVar9 + 0x100) = *(undefined4 *)(puVar5 + 7);
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}

