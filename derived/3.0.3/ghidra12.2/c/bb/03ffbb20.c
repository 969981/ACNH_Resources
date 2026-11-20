
void FUN_03ffbb20(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar6 = PTR_DAT_04bcaa30;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)PTR_DAT_04bcaa30;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  lVar7 = FUN_006bbd50(*(ulong *)PTR_DAT_04bcaa30 * param_1,SUB168(auVar1 * auVar4,8),1000000000,0);
  lVar8 = nn::os::GetSystemTick();
  if (lVar7 < 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  lVar9 = nn::os::GetSystemTick();
  uVar10 = (lVar8 + lVar7) - lVar9;
  if (-1 < (long)uVar10) {
    uVar13 = *(ulong *)puVar6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    uVar10 = FUN_006bbd50(uVar10 * 1000000000,SUB168(auVar2 * ZEXT816(1000000000),8),uVar13,0);
    if (20000 < uVar10) {
      uVar10 = uVar10 - 20000;
      if (uVar10 < 2000) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar10;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar13;
        lVar9 = FUN_006bbd50(uVar10 * uVar13,SUB168(auVar3 * auVar5,8),1000000000,0);
        lVar11 = nn::os::GetSystemTick();
        while (lVar12 = nn::os::GetSystemTick(), lVar12 <= lVar11 + lVar9) {
          Yield();
        }
      }
      else {
        nn::os::SleepThread();
      }
    }
    while (lVar9 = nn::os::GetSystemTick(), lVar9 <= lVar8 + lVar7) {
      Yield();
    }
  }
  return;
}

