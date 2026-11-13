
void FUN_01360a40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *__ptr;
  
  lVar6 = *(long *)(param_1 + 0x48038);
  if (lVar6 != 0) {
    __ptr = (long *)(lVar6 + -8);
    if (*__ptr != 0) {
      lVar7 = *__ptr * 0x718;
      puVar1 = PTR_DAT_04bc4568 + 0x10;
      puVar2 = PTR_DAT_04bc4788 + 0x10;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar4 = PTR_DAT_04bbc5d8 + 0x10;
      do {
        plVar5 = (long *)(lVar6 + -0x718 + lVar7);
        lVar7 = lVar7 + -0x718;
        *plVar5 = (long)puVar1;
        plVar5[0x17] = (long)puVar2;
        plVar5[0xda] = (long)puVar3;
        plVar5[0xd5] = (long)puVar4;
        plVar5[0xcc] = (long)puVar3;
        plVar5[199] = (long)puVar4;
        plVar5[0xbe] = (long)puVar3;
        plVar5[0xb9] = (long)puVar4;
        plVar5[0xb0] = (long)puVar3;
        plVar5[0xab] = (long)puVar4;
        plVar5[0xa2] = (long)puVar3;
        plVar5[0x9d] = (long)puVar4;
        plVar5[0x94] = (long)puVar3;
        plVar5[0x8f] = (long)puVar4;
        plVar5[0x86] = (long)puVar3;
        plVar5[0x81] = (long)puVar4;
        plVar5[0x78] = (long)puVar3;
        plVar5[0x73] = (long)puVar4;
        plVar5[0x6a] = (long)puVar3;
        plVar5[0x65] = (long)puVar4;
        plVar5[0x5c] = (long)puVar3;
        plVar5[0x57] = (long)puVar4;
        plVar5[0x4e] = (long)puVar3;
        plVar5[0x49] = (long)puVar4;
        plVar5[0x40] = (long)puVar3;
        plVar5[0x3b] = (long)puVar4;
        plVar5[0x32] = (long)puVar3;
        plVar5[0x2d] = (long)puVar4;
        plVar5[0x24] = (long)puVar3;
        plVar5[0x1f] = (long)puVar4;
        plVar5[0x1a] = (long)puVar4;
        plVar5[0x12] = (long)puVar3;
        plVar5[0xd] = (long)puVar3;
        plVar5[8] = (long)puVar4;
        plVar5[3] = (long)puVar3;
      } while (lVar7 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x48038) = 0;
    *(undefined4 *)(param_1 + 0x48030) = 0;
  }
  return;
}

