
undefined8 FUN_01e3ca48(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *local_30;
  undefined8 local_28;
  
  if ((*(uint *)(param_1 + 0x69c) >> 0x13 & 1) != 0) {
    *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) & 0xfff7ffff;
    if (*(long *)(param_1 + 0x3c0) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x60);
      if (puVar7 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_052461c0);
          puVar7 = &DAT_05240280;
          if (iVar4 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar7 = &DAT_05240280;
        }
      }
      iVar4 = *(int *)(puVar7 + 0x270);
      if (1 < iVar4) {
        iVar3 = iVar4 + *(int *)((long)puVar7 + 0x137c) + -1;
        iVar4 = 0;
        if (*(int *)(puVar7 + 0x26f) <= iVar3) {
          iVar4 = *(int *)(puVar7 + 0x26f);
        }
        (*(code *)**(undefined8 **)(puVar7[0x26e] + (long)(iVar3 - iVar4) * 0x38))();
        iVar4 = *(int *)(puVar7 + 0x270) + -1;
        *(int *)(puVar7 + 0x270) = iVar4;
      }
      if (*(long *)(puVar7[600] + 0x280) != 0) {
        iVar3 = iVar4 + *(int *)((long)puVar7 + 0x137c) + -1;
        iVar4 = 0;
        if (*(int *)(puVar7 + 0x26f) <= iVar3) {
          iVar4 = *(int *)(puVar7 + 0x26f);
        }
        local_30 = PTR_DAT_04bb2020 + 0x10;
        local_28 = *(undefined8 *)(puVar7[0x26e] + (long)(iVar3 - iVar4) * 0x38 + 8);
        FUN_03ef3440(*(long *)(puVar7[600] + 0x280),&local_30);
      }
      lVar5 = *(long *)(param_1 + 0x3c0);
      bVar2 = *(byte *)(lVar5 + 0x290);
      uVar1 = bVar2 & 0xfffffff7;
      uVar6 = 4;
      *(char *)(lVar5 + 0x290) = (char)uVar1;
      if (((bVar2 >> 4 & 1) == 0) && (uVar6 = 2, (uVar1 >> 2 & 1) == 0)) {
        uVar6 = uVar1 >> 1 & 1;
      }
      *(uint *)(lVar5 + 0x294) = uVar6;
    }
  }
  return 1;
}

