
void FUN_03f27330(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar4 = PTR_DAT_04bb4f38;
  puVar3 = PTR_DAT_04bb4f30;
  lVar9 = *(long *)PTR_DAT_04bc95e0;
  if (*(int *)(lVar9 + 0x188) != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 400);
    puVar1 = PTR_DAT_04bb4f40 + 0x10;
    do {
      plVar8 = (long *)*puVar10;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar8 != (long *)0x0) && (uVar7 = (**(code **)*plVar8)(plVar8,puVar3), (uVar7 & 1) != 0)
         ) {
        uVar7 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if ((uVar7 & 1) != 0) {
          cVar2 = *(char *)((long)plVar8 + 0x17d);
          if (cVar2 == '\x02') {
            *(undefined4 *)(param_1 + 0xfc) = 1;
          }
          else if (cVar2 == '\x01') {
            *(undefined4 *)(param_1 + 0xfc) = 0;
          }
          else if (cVar2 == '\0') {
            *(undefined4 *)(param_1 + 0xfc) = 3;
          }
          else {
            *(undefined4 *)(param_1 + 0xf8) = 2;
          }
        }
        break;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != (undefined8 *)(*(long *)(lVar9 + 400) + (long)*(int *)(lVar9 + 0x188) * 8));
  }
  if ((*(int *)(param_2 + 4) == 0x1e) || ((param_3 & 1) != 0)) {
    iVar6 = nn::oe::GetOperationMode();
    iVar5 = (uint)(iVar6 != 1) << 1;
    if (iVar6 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0xf8) = iVar5;
  }
  return;
}

