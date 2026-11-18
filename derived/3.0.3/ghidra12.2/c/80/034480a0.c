
/* WARNING: Removing unreachable block (ram,0x0344812c) */
/* WARNING: Removing unreachable block (ram,0x03448100) */
/* WARNING: Removing unreachable block (ram,0x03448158) */

void FUN_034480a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_05355a60 != 0) {
    lVar4 = *(long *)(DAT_05355a60 + 0xbf8);
    lVar1 = DAT_05355a60 + 0xf18;
    lVar2 = DAT_05355a60 + 0xf28;
    lVar3 = DAT_05355a60 + 0xf08;
    (**(code **)(*(long *)(lVar4 + 0x4e8) + 0x18))((long *)(lVar4 + 0x4e8));
    FUN_03363ed0(lVar3,*(undefined8 *)(lVar4 + 0x4f0));
    (**(code **)(*(long *)(lVar4 + 0xb40) + 0x18))((long *)(lVar4 + 0xb40));
    FUN_03363ed0(lVar1,*(undefined8 *)(lVar4 + 0xb48));
    (**(code **)(*(long *)(lVar4 + 0x1198) + 0x18))((long *)(lVar4 + 0x1198));
    FUN_03363ed0(lVar2,*(undefined8 *)(lVar4 + 0x11a0));
  }
  return;
}

