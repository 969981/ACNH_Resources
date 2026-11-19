
void FUN_03af4630(long param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (*(char *)(param_1 + 0x94) == '\0' || *(int *)(param_1 + 0x90) == 1) {
    return;
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar7 == 0) {
    iVar6 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar6 = (int)lVar7 + -1;
  }
  lVar7 = param_1 + 0x78;
  bVar2 = *(byte *)(lVar7 + iVar6);
  *(char *)(lVar7 + iVar6) = '\x01' - *(char *)(lVar7 + iVar6);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = (undefined4 *)((param_3 & 0xffffffff) * 0x20 + 0x4c4bcd8 + (ulong)bVar2 * 0x10);
  if (*(int *)(param_1 + 0x90) != 1) {
    lVar7 = param_2[1];
    puVar8 = (uint *)(param_1 + 0x68);
    if (*puVar8 >> 0xe == 0) {
      do {
        uVar3 = *puVar8;
        uVar9 = (ulong)uVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar5) {
          *puVar8 = uVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar3 < 0x4000) {
        if (*(uint *)(param_1 + 0x48) <= uVar3) {
          uVar9 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x50) + uVar9 * 8) = lVar7;
        if (*(long *)(param_1 + 0x70) != 0) {
          if (*(long *)(param_1 + 0x70) == lVar7) {
            uStack_44 = 0x3f800000;
            local_48 = 0;
            uStack_4c = 0;
            local_50 = 0x3f800000;
          }
          else {
            local_50 = *puVar1;
            uStack_4c = puVar1[1];
            uStack_44 = 0;
            local_48 = puVar1[2];
          }
          goto LAB_03af4764;
        }
      }
      else {
        *puVar8 = 0x4000;
      }
    }
  }
  local_50 = *puVar1;
  uStack_4c = puVar1[1];
  local_48 = puVar1[2];
  uStack_44 = puVar1[3];
LAB_03af4764:
  (**(code **)**(undefined8 **)(param_1 + 0x98))
            (*(undefined8 **)(param_1 + 0x98),iVar6,param_2,&local_50);
  return;
}

