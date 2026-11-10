
void FUN_00369da0(long param_1,undefined8 param_2)

{
  char acStack_a8 [136];
  
  nn::util::SNPrintf(acStack_a8,0x88,"%s_%s.bflan",*(undefined8 *)(param_1 + 0x30),param_2);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
            (*(long **)(param_1 + 0x40),0x616e696d,acStack_a8);
  return;
}

