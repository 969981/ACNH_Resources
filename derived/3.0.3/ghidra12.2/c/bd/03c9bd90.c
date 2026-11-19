
long * FUN_03c9bd90(long param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  char *__s2;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 auStack_50 [8];
  long local_48;
  long local_40;
  
  uVar4 = FUN_00369da0();
  FUN_00360020(auStack_50,uVar4);
  if (local_48 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)FUN_00367b30(0x88);
    if (plVar5 != (long *)0x0) {
      FUN_0035d9bc(plVar5);
      plVar5[8] = (long)(plVar5 + 8);
      plVar5[9] = (long)(plVar5 + 8);
      plVar5[10] = 0x2000000000000000;
      plVar5[0xb] = 0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      plVar5[0x10] = 0;
      plVar5[0xe] = 0;
      plVar5[0xf] = 0;
      *plVar5 = (long)&PTR_LAB_04b89048;
      plVar6 = plVar5 + 1;
      lVar7 = *plVar6;
      plVar8 = (long *)(param_1 + 8);
      *plVar6 = *plVar8;
      *(long **)(lVar7 + 8) = plVar8;
      *(long **)(*plVar8 + 8) = plVar6;
      *plVar8 = lVar7;
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),
                 *(undefined8 *)(param_1 + 0x40),local_48,
                 (uint)*(ushort *)(local_48 + 0xe) + param_3);
      plVar5[0xb] = param_1;
      plVar5[0xc] = local_40;
      (**(code **)(*plVar5 + 0x20))(plVar5,0);
      uVar2 = *(uint *)(plVar5[0xc] + 0x14);
      if (uVar2 != 0) {
        puVar1 = (uint *)(plVar5[0xc] + (ulong)uVar2);
        uVar10 = (ulong)(ushort)puVar1[2];
        if (uVar10 != 0) {
          do {
            puVar9 = puVar1 + 3;
            __s2 = (char *)0x0;
            if (*puVar9 != 0) {
              __s2 = (char *)((long)puVar9 + (ulong)*puVar9);
            }
            iVar3 = strcmp("CommandPlayEnd",__s2);
            if (iVar3 == 0) {
              if (*(char *)((long)puVar1 + 0x16) == '\0') {
                *(byte *)((long)plVar5 + 0x57) = *(byte *)((long)plVar5 + 0x57) | 0x40;
                (**(code **)(**(long **)(plVar5[0xb] + 0x88) + 0x88))
                          (*(long **)(plVar5[0xb] + 0x88),plVar5,0,(long)puVar9 + (ulong)puVar1[4],
                           (short)puVar1[5]);
                return plVar5;
              }
              return plVar5;
            }
            uVar10 = uVar10 - 1;
            puVar1 = puVar9;
          } while (uVar10 != 0);
        }
      }
    }
  }
  return plVar5;
}

