
void FUN_0075b0c0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar8 = (long *)(lVar6 + 8);
  if (lVar3 != 0) {
    plVar8 = (long *)(lVar3 + 0xa8);
  }
  lVar3 = *plVar8;
  if (lVar3 != 0) {
    lVar6 = 0;
    plVar8 = &DAT_04c969c8;
    puVar1 = PTR_DAT_04bb21f8 + 0x10;
    do {
      if ((((*(long *)((long)param_1 + lVar6) == 0) && (lVar7 = *plVar8, lVar7 != 0)) &&
          (*(int *)(lVar7 + 0xd8) == -1)) &&
         (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 != (code *)0x0)) {
        (**(code **)(*(long *)(lVar7 + 0x78) + 0x18))((long *)(lVar7 + 0x78));
        plVar4 = (long *)(*pcVar9)(*(undefined8 *)(lVar7 + 0x80),lVar3);
        *(long **)((long)param_1 + lVar6) = plVar4;
        if (plVar4 != (long *)0x0) {
          local_168 = 0x100;
          local_65 = 0;
          local_164[0] = 0;
          local_178 = puVar1;
          puStack_170 = local_164;
          uVar5 = (**(code **)(*plVar4 + 0xf0))(plVar4,&local_178,1);
          if ((uVar5 & 1) != 0) {
            (**(code **)(*plVar4 + 0x108))(plVar4,&local_178);
          }
        }
      }
      lVar6 = lVar6 + 0x10;
      plVar8 = plVar8 + 1;
    } while (lVar6 != 0xec0);
    lVar3 = 0;
    plVar8 = &DAT_04c969c8;
    do {
      if ((*(long *)((long)param_1 + lVar3) == 0) && (*plVar8 != 0)) {
        uVar2 = *(uint *)(*plVar8 + 0xd8);
        if (uVar2 != 0xffffffff) {
          plVar4 = param_1 + (ulong)uVar2 * 2;
          if (0xeb < uVar2) {
            plVar4 = param_1;
          }
          if (*plVar4 != 0) {
            *(long *)((long)param_1 + lVar3) = *plVar4;
          }
        }
      }
      lVar3 = lVar3 + 0x10;
      plVar8 = plVar8 + 1;
    } while (lVar3 != 0xec0);
  }
  return;
}

