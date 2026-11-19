
void FUN_039025b0(undefined4 param_1,long param_2,long param_3,int param_4,uint param_5,
                 undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = param_5 & 0xfffffffe;
  if (*(long *)(param_2 + 0x20 + (long)param_4 * 8) != 0) {
    uVar3 = param_5;
  }
  uVar2 = uVar3 & 0xfffffff9;
  if (*(long *)(param_2 + 0x60) != 0) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb29d0;
    uVar8 = 0;
    do {
      plVar6 = *(long **)(param_2 + 0x20 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
      if (plVar6 != (long *)0x0) {
        puVar1 = (uint *)(plVar6 + 0x17);
        do {
          uVar3 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar3 | 0x80000000;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar3 & 0x7fffffff) != 0) {
          if ((int)uVar3 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar7 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar3;
    } while (uVar3 != 8);
    plVar6 = *(long **)(param_2 + 0x60);
    if (plVar6 != (long *)0x0) {
      puVar1 = (uint *)(plVar6 + 0x17);
      do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 | 0x80000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar3 & 0x7fffffff) != 0) {
        if ((int)uVar3 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar7 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_038e77e4(param_8,param_3,param_2);
    if ((uVar2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_3 + 0xb8),param_4,param_6,0xf);
    }
    if (((uVar2 & 6) != 0) && (*(long *)(param_2 + 0x60) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03902794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_04bcf298)
                (param_1,*(undefined8 *)(param_3 + 0xb8),uVar2 >> 1 & 1,param_7,
                 -(uVar2 >> 2 & 1) & 0xff);
      return;
    }
  }
  return;
}

