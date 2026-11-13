
undefined8 FUN_014ca580(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_1 + 0x80);
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3e10 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3e10), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3e08 = PTR_DAT_04bb3040 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3e10);
    }
    uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb3e08);
    if ((uVar5 & 1) != 0) {
      if ((*(byte *)(plVar8 + 0x55) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar7 = plVar8[0x56];
        lVar6 = 0;
        if ((lVar7 != 0) && (lVar6 = *(long *)(lVar7 + 0x18), (*(byte *)(lVar7 + 8) & 10) != 2)) {
          lVar6 = 0;
        }
      }
      iVar4 = *(int *)(lVar6 + 0x3c8);
      iVar3 = *(int *)(lVar6 + 0x3c0);
      if (iVar4 < iVar3) {
        *(int *)(lVar6 + 0x3c8) = iVar4 + 1;
        iVar4 = *(int *)(lVar6 + 0x3c4) + iVar4;
        iVar2 = 0;
        if (iVar3 <= iVar4) {
          iVar2 = iVar3;
        }
        if (*(long *)(lVar6 + 0x3b8) != 0) {
          puVar1 = (undefined1 *)(*(long *)(lVar6 + 0x3b8) + (long)(iVar4 - iVar2) * 0x20);
          *puVar1 = *(undefined1 *)(param_2 + 7);
          *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 2);
          if (NAN((float)param_2[4])) {
            *(float *)(puVar1 + 0x10) = NAN;
          }
          else {
            *(undefined4 *)(puVar1 + 0x10) = param_2[4];
            *(undefined4 *)(puVar1 + 0x14) = param_2[5];
            *(undefined4 *)(puVar1 + 0x18) = param_2[6];
          }
          *(undefined4 *)(puVar1 + 0x1c) = *param_2;
          return 1;
        }
      }
    }
  }
  return 0;
}

