
undefined8 FUN_016e3600(long *param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 1 & 1) != 0) && (uVar4 = (**(code **)(*param_1 + 0x280))(), (uVar4 & 1) != 0))
    {
      iVar3 = FUN_016f5c40(param_1);
      if (iVar3 == 0xc) {
        puVar5 = (undefined8 *)param_1[0xc];
        if (puVar5 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_052461c0);
            puVar5 = &DAT_05240280;
            if (iVar3 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar5 = &DAT_05240280;
          }
        }
        if ((*(uint *)((long)puVar5 + 0x15f4) >> 4 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

