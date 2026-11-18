
void FUN_033ba168(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  
  uVar9 = *(uint *)(param_1 + 0x6c);
  if (uVar9 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x90) = param_2[1];
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8))
    ;
    if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar8 + 0x46) != uVar9)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_033ba24c;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_033ba24c:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      if (((*PTR_DAT_04bbfcf8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbfcf8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbfcf0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfcf8);
      }
      uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbfcf0);
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        local_68 = *param_2;
        uStack_64 = param_2[1];
        local_60 = *(undefined4 *)(param_1 + 0xa0);
        local_5c = *(undefined8 *)(param_1 + 0xa4);
        local_54 = *(undefined4 *)(param_1 + 0xac);
        local_50 = *(undefined8 *)(param_1 + 0x80);
        local_48 = *(undefined4 *)(param_1 + 0x88);
        local_44 = *(undefined2 *)(param_2 + 2);
        FUN_01a2d634(plVar8,&local_68);
        bVar6 = *(byte *)(param_1 + 0x74) & 0xf9 | 4;
        goto LAB_033ba300;
      }
    }
  }
  bVar6 = *(byte *)(param_1 + 0x74) & 0xfb | 2;
LAB_033ba300:
  *(byte *)(param_1 + 0x74) = bVar6;
  return;
}

