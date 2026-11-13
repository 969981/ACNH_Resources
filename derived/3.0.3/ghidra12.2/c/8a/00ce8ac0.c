
void FUN_00ce8ac0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if (DAT_04c93e08 == 0) {
    return;
  }
  uVar6 = *param_2;
  if ((((uVar6 == 0) ||
       (lVar7 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar6 >> 0x11) & 0x7ff8)), lVar7 == 0)) ||
      ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar7 + 0x230) != uVar6)) {
    lVar7 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar8 = DAT_04c93e08;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
      goto joined_r0x00ce8b78;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00ce8b78;
    }
  }
  uVar6 = 0;
joined_r0x00ce8b78:
  if (lVar7 != 0) {
    uVar6 = uVar6 ^ 1;
    if (*(int *)(lVar7 + 0x150) != 1) {
      uVar6 = 1;
    }
    if (((uVar6 == 0) && (puVar1 = (uint *)(lVar7 + 0x248), (*puVar1 >> 9 & 1) == 0)) &&
       (((*puVar1 >> 1 & 1) == 0 && ((*puVar1 >> 8 & 1) == 0)))) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 0x200;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(long *)(lVar7 + 0xb0) != lVar7 + 0xa8) {
        lVar8 = (long)*(int *)(lVar7 + 0xbc);
        plVar5 = (long *)(*(long *)(lVar7 + 0xb0) - lVar8);
        do {
          (**(code **)(*plVar5 + 0xb0))(plVar5);
          plVar5 = (long *)(*(long *)((long)plVar5 + lVar8 + 8) - lVar8);
        } while (plVar5 != (long *)((lVar7 + 0xa8) - lVar8));
      }
    }
  }
  return;
}

