
void FUN_036031f0(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined1 *)(param_1 + 0x178) = 0;
  if (1 < *(byte *)(param_1 + 0x138) && *(char *)(param_1 + 0x139) != '\0') {
    puVar1 = (uint *)(param_1 + 0xc44);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc38));
    iVar5 = FUN_04002c24(param_1 + 0x9d0);
    if (iVar5 != 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
  }
  puVar4 = PTR_DAT_04bdf328;
  if (*(char *)(param_1 + 0x138) != '\0') {
    uVar8 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x140 + uVar8 * 8);
      if (*(long *)(lVar6 + 0xa98) != 0) {
        *(long *)(lVar6 + 0xaa0) = *(long *)(lVar6 + 0xa98);
        *(undefined8 *)(lVar6 + 0xab0) = *(undefined8 *)(lVar6 + 0xaa8);
        FUN_035c3b90(lVar6 + 0x438,0xffffffffffffffff,5);
      }
      FUN_035bf030(lVar6 + 0x438);
      FUN_0360ab80(lVar6 + 0x1100);
      *(undefined1 *)(lVar6 + 0x240) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined4 *)(lVar6 + 0x18) = 4;
      *(undefined1 *)(lVar6 + 8) = 0;
      lVar6 = *(long *)(param_1 + 0x140 + uVar8 * 8);
      if (lVar6 != 0) {
        plVar7 = *(long **)puVar4;
        FUN_03612790(lVar6);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar6);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 0x138));
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

