
void FUN_013e852c(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0x300) != '\0') {
    plVar8 = *(long **)(param_1 + 600);
    if (((DAT_051b5d78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_051b5d78), iVar4 != 0)) {
      DAT_051b5d70 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(&DAT_051b5d78);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,&DAT_051b5d70), (uVar5 & 1) != 0)) {
      plVar10 = plVar8 + 0x2a;
      if ((param_2 & 1) == 0) {
        piVar6 = (int *)(**(code **)(plVar8[0x24] + 0xf0))(plVar8 + 0x24);
        iVar4 = *piVar6;
        piVar6 = (int *)(**(code **)(plVar8[0x2a] + 0xf0))(plVar10);
        if (*piVar6 <= iVar4) {
          iVar4 = *piVar6;
        }
        piVar6 = (int *)(**(code **)(plVar8[0x24] + 0xf0))(plVar8 + 0x24);
      }
      else {
        plVar9 = plVar8 + 0x18;
        piVar6 = (int *)(**(code **)(*plVar9 + 0xf0))(plVar9);
        iVar4 = *piVar6;
        piVar6 = (int *)(**(code **)(plVar8[0x2a] + 0xf0))(plVar10);
        if (*piVar6 <= iVar4) {
          iVar4 = *piVar6;
        }
        piVar6 = (int *)(**(code **)(*plVar9 + 0xf0))(plVar9);
        plVar10 = plVar8 + 0x1e;
      }
      iVar3 = *piVar6;
      piVar6 = (int *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      if (iVar3 <= *piVar6) {
        iVar3 = *piVar6;
      }
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar2 = puVar7[3];
      uVar1 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar7[2] = uVar2;
      puVar7[3] = uVar1;
      *(int *)(param_1 + 0x2fc) =
           (int)((ulong)uVar1 * (ulong)(uint)((iVar3 - iVar4) * 0x1e) >> 0x20) + iVar4 * 0x1e;
    }
  }
  return;
}

