
bool FUN_01df2b90(void)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  char local_24 [4];
  
  puVar4 = PTR_DAT_04bcb7d8;
  puVar3 = PTR_DAT_04bb21d0;
  lVar11 = *(long *)PTR_DAT_04bb21d0;
  if (*(char *)(lVar11 + 0x2078) == '\0') {
    if (*(int *)(*(long *)(lVar11 + 0xf88) + 0x10) == *(int *)(*(long *)(lVar11 + 0xf88) + 0x118)) {
      plVar10 = *(long **)(lVar11 + 0xf80);
      plVar12 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
      uVar7 = (**(code **)(*plVar12 + 0xa8))(plVar12);
      if (((uVar7 & 1) == 0) &&
         (plVar12[2] != plVar12[5] ||
          *(char *)((long)plVar12 + 0x19) != *(char *)((long)plVar12 + 0x31))) {
        plVar12 = *(long **)(*(long *)puVar4 + 0x68);
        cVar5 = (**(code **)(*plVar12 + 0x160))(plVar12,plVar12 + 5);
        lVar11 = *(long *)(plVar10[3] + (long)cVar5 * 8);
        pcVar9 = (char *)**(undefined8 **)
                           (*(long *)(lVar11 + 8) + (long)*(int *)(lVar11 + 0x20) * 8);
      }
      else {
        pcVar9 = (char *)(**(code **)(*plVar10 + 0x108))(plVar10);
      }
      pcVar1 = "";
      if (pcVar9 != (char *)0x0) {
        pcVar1 = pcVar9;
      }
      return *pcVar1 != '\0';
    }
  }
  else {
    lVar6 = (**(code **)(**(long **)(lVar11 + 0xf80) + 0x100))();
    puVar4 = PTR_DAT_04bcb7d8;
    if ((1 < *(byte *)(lVar6 + 1) - 1) &&
       (lVar11 = *(long *)(lVar11 + 0xf88), *(int *)(lVar11 + 0x10) == *(int *)(lVar11 + 0x118))) {
      iVar2 = *(int *)(lVar11 + 0x220);
      puVar13 = *(undefined8 **)(*(long *)puVar3 + 0xf90);
      plVar10 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
      uVar7 = (**(code **)(*plVar10 + 0x28))(plVar10);
      local_24[0] = '\0';
      lVar11 = *(long *)(*(long *)puVar4 + 0x68);
      while ((((uVar7 >> ((long)local_24[0] & 0x3fU) & 1) == 0 ||
              (((auVar14 = (**(code **)(*plVar10 + 0x130))(plVar10,local_24),
                *(long *)(lVar11 + 0x28) == auVar14._0_8_ &&
                ((uint)*(byte *)(lVar11 + 0x30) == (auVar14._8_4_ & 0xff))) &&
               ((uint)*(byte *)(lVar11 + 0x31) == (auVar14._9_4_ & 0xff))))) ||
             (piVar8 = (int *)(**(code **)(*(long *)*puVar13 + 0x110))((long *)*puVar13,local_24),
             *piVar8 == iVar2))) {
        local_24[0] = local_24[0] + '\x01';
        if ('?' < local_24[0]) {
          return true;
        }
      }
    }
  }
  return false;
}

